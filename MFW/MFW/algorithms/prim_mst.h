#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "undirected_graph.h"
#include "double_linked_list.h"
#include "heap.h"
#include "hash_table.h"

namespace MFWAlg {
	class Prim {
		public:
			static const int LARGE_NUMBER = 999999;
			/**
			 * Prim's Algorithm. 
			 *
			 * Input: A non-empty connected weighted graph with vertices V and edges E 
			 *        (the weights can be negative).
			 *
			 * Initialize: Vnew = {x}, where x is an arbitrary node (starting point) from V, Enew = {}
			 *
			 * Repeat until Vnew = V:
			 *   1. Choose an edge {u, v} with minimal weight such that u is in Vnew and v
			 *      is not (if there are multiple edges with the same weight, any of them may be picked)
			 *   2. Add v to Vnew, and {u, v} to Enew
			 *
			 * Output: Vnew and Enew describe a minimal spanning tree
			 */
			static Graph * run(const Graph & g, int32_t src_id) {
				UndirectedGraph * mst = new UndirectedGraph(); // empty set == Vnew
				// weight hash table
				HashTable<int32_t, int32_t> keys(g.vertex_count());
				// previous vertex hash table
				HashTable<int32_t, int32_t> pi(g.vertex_count()); 

				// a binary heap
				Heap<uint32_t> Q(g.vertex_count());

				// all vertices
				Graph::Adjacent * a;
				list_for_each_entry(a, &g.list(), a_node){
					Q.push(LARGE_NUMBER, a->v.id);
					keys[a->v.id] = LARGE_NUMBER;
				}
			
				Q.decrease_key(src_id, 0);
				keys[src_id] = 0;

				while (!Q.is_empty()) {
					Heap<uint32_t>::elem e = Q.pop();
					uint32_t id = e.data;
					Graph::Adjacent * u = g[id];	// the vertex to process
					Graph::Vertex * v;
					list_for_each_entry(v, &u->v_head, v_node) {
						if (Q.contains(v->id) && v->weight < keys[v->id]) {
							pi[v->id] = id;
							Q.decrease_key(v->id, v->weight);
							keys[v->id] = v->weight;
						}
					}
				}

				// create graph
				list_for_each_entry(a, &g.list(), a_node){
					mst->add_vertex(a->v.id);
					if (pi[a->v.id] != 0) {
						mst->add_vertex(pi[a->v.id]);
						mst->add_edge(pi[a->v.id], a->v.id, (*a)[pi[a->v.id]]->weight);
					}
				}

				return mst;
			};
	};
}


