// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DB_Logic.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DB_Logic.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace PDB_Logic {
class LDIdentificationDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LDIdentification> {
} _LDIdentification_default_instance_;
class DLIdentificationDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<DLIdentification> {
} _DLIdentification_default_instance_;

namespace protobuf_DB_5fLogic_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LDIdentification, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DLIdentification, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(LDIdentification)},
  { 5, -1, sizeof(DLIdentification)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LDIdentification_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_DLIdentification_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "DB_Logic.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _LDIdentification_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _DLIdentification_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::PDB_Base::protobuf_DB_5fBase_2eproto::InitDefaults();
  _LDIdentification_default_instance_.DefaultConstruct();
  _DLIdentification_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\016DB_Logic.proto\022\tPDB_Logic\032\rDB_Base.pro"
      "to\"\022\n\020LDIdentification\"\022\n\020DLIdentificati"
      "on*\033\n\007EDG_CMD\022\020\n\014EDG_CMD_None\020\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 119);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DB_Logic.proto", &protobuf_RegisterTypes);
  ::PDB_Base::protobuf_DB_5fBase_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_DB_5fLogic_2eproto

const ::google::protobuf::EnumDescriptor* EDG_CMD_descriptor() {
  protobuf_DB_5fLogic_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogic_2eproto::file_level_enum_descriptors[0];
}
bool EDG_CMD_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LDIdentification::LDIdentification()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_DB_5fLogic_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PDB_Logic.LDIdentification)
}
LDIdentification::LDIdentification(const LDIdentification& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:PDB_Logic.LDIdentification)
}

void LDIdentification::SharedCtor() {
  _cached_size_ = 0;
}

LDIdentification::~LDIdentification() {
  // @@protoc_insertion_point(destructor:PDB_Logic.LDIdentification)
  SharedDtor();
}

void LDIdentification::SharedDtor() {
}

void LDIdentification::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LDIdentification::descriptor() {
  protobuf_DB_5fLogic_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LDIdentification& LDIdentification::default_instance() {
  protobuf_DB_5fLogic_2eproto::InitDefaults();
  return *internal_default_instance();
}

LDIdentification* LDIdentification::New(::google::protobuf::Arena* arena) const {
  LDIdentification* n = new LDIdentification;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LDIdentification::Clear() {
// @@protoc_insertion_point(message_clear_start:PDB_Logic.LDIdentification)
}

bool LDIdentification::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PDB_Logic.LDIdentification)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:PDB_Logic.LDIdentification)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PDB_Logic.LDIdentification)
  return false;
#undef DO_
}

void LDIdentification::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PDB_Logic.LDIdentification)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // @@protoc_insertion_point(serialize_end:PDB_Logic.LDIdentification)
}

::google::protobuf::uint8* LDIdentification::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PDB_Logic.LDIdentification)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // @@protoc_insertion_point(serialize_to_array_end:PDB_Logic.LDIdentification)
  return target;
}

size_t LDIdentification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PDB_Logic.LDIdentification)
  size_t total_size = 0;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LDIdentification::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PDB_Logic.LDIdentification)
  GOOGLE_DCHECK_NE(&from, this);
  const LDIdentification* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LDIdentification>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PDB_Logic.LDIdentification)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PDB_Logic.LDIdentification)
    MergeFrom(*source);
  }
}

void LDIdentification::MergeFrom(const LDIdentification& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PDB_Logic.LDIdentification)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void LDIdentification::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PDB_Logic.LDIdentification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LDIdentification::CopyFrom(const LDIdentification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PDB_Logic.LDIdentification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LDIdentification::IsInitialized() const {
  return true;
}

void LDIdentification::Swap(LDIdentification* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LDIdentification::InternalSwap(LDIdentification* other) {
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LDIdentification::GetMetadata() const {
  protobuf_DB_5fLogic_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogic_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LDIdentification

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DLIdentification::DLIdentification()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_DB_5fLogic_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PDB_Logic.DLIdentification)
}
DLIdentification::DLIdentification(const DLIdentification& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:PDB_Logic.DLIdentification)
}

void DLIdentification::SharedCtor() {
  _cached_size_ = 0;
}

DLIdentification::~DLIdentification() {
  // @@protoc_insertion_point(destructor:PDB_Logic.DLIdentification)
  SharedDtor();
}

void DLIdentification::SharedDtor() {
}

void DLIdentification::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DLIdentification::descriptor() {
  protobuf_DB_5fLogic_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DLIdentification& DLIdentification::default_instance() {
  protobuf_DB_5fLogic_2eproto::InitDefaults();
  return *internal_default_instance();
}

DLIdentification* DLIdentification::New(::google::protobuf::Arena* arena) const {
  DLIdentification* n = new DLIdentification;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DLIdentification::Clear() {
// @@protoc_insertion_point(message_clear_start:PDB_Logic.DLIdentification)
}

bool DLIdentification::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PDB_Logic.DLIdentification)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:PDB_Logic.DLIdentification)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PDB_Logic.DLIdentification)
  return false;
#undef DO_
}

void DLIdentification::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PDB_Logic.DLIdentification)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // @@protoc_insertion_point(serialize_end:PDB_Logic.DLIdentification)
}

::google::protobuf::uint8* DLIdentification::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PDB_Logic.DLIdentification)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // @@protoc_insertion_point(serialize_to_array_end:PDB_Logic.DLIdentification)
  return target;
}

size_t DLIdentification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PDB_Logic.DLIdentification)
  size_t total_size = 0;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DLIdentification::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PDB_Logic.DLIdentification)
  GOOGLE_DCHECK_NE(&from, this);
  const DLIdentification* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DLIdentification>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PDB_Logic.DLIdentification)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PDB_Logic.DLIdentification)
    MergeFrom(*source);
  }
}

void DLIdentification::MergeFrom(const DLIdentification& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PDB_Logic.DLIdentification)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void DLIdentification::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PDB_Logic.DLIdentification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DLIdentification::CopyFrom(const DLIdentification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PDB_Logic.DLIdentification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DLIdentification::IsInitialized() const {
  return true;
}

void DLIdentification::Swap(DLIdentification* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DLIdentification::InternalSwap(DLIdentification* other) {
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DLIdentification::GetMetadata() const {
  protobuf_DB_5fLogic_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogic_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DLIdentification

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace PDB_Logic

// @@protoc_insertion_point(global_scope)