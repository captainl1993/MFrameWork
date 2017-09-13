#pragma once
#include "Singleton.h"
#include "NNTCPServerMgr.h"
#include "Net_Handler.h"
#include "Login_Client.pb.h"

/*
������Ϣ�ַ�������
���ڣ����������յ���Ϣ�ַ�����Ӧ�Ĵ�����

*/
class Net_ClientHandler :public MFW::Singleton<Net_ClientHandler>, public NetServer_Handler
{
private:
public:
	Net_ClientHandler();
	virtual void OnRead(std::shared_ptr<NNTCPLinkNode>  session, std::string data, NNTCPNode& netNode);
	virtual void OnConnected(std::shared_ptr<NNTCPLinkNode>  session, NNTCPNode& netNode);
	virtual void OnDisConnected(std::shared_ptr<NNTCPLinkNode>  session, NNTCPNode& netNode);
	virtual void OnTimered(uv_timer_t* handle);

	void HandleLogin(std::shared_ptr<NNTCPLinkNode> & session, const int& cmd, std::string& data, NNTCPNode& netNode);
	void HandleRegister(std::shared_ptr<NNTCPLinkNode>&  session, const int& cmd, std::string& data, NNTCPNode& netNode);

};