

#ifndef _WNETWORKSERVICE_H_
#define _WNETWORKSERVICE_H_

#include <vector>

#include "WNetReciveThread.h"

using namespace std;

typedef enum 
{
	kSuccess,
	kFail,
	kSocketError,
	kBindingError,
	kAcceptError,
	kLiseningError,
	kConnectError

}ServiceCode;




class WNetWorkService
{

public:

	WNetWorkService(bool server=true,int port_num=26719,int max_listen=20);
	~WNetWorkService();


	ServiceCode startService();

	bool configureService();




private:

	int port_num_;
	bool server_;
	int max_listen_;

	WNetReciveThread *p_recive_thread;
	

	vector<int> socket_list_;
	vector<int> socket_recive_list_;
	vector<int> socket_send_list_;




};
















#endif



