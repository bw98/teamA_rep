#ifndef _MY_RECV_H
#define _MY_RECV_H
	#define BUFSIZE 1024
	void myrecv(int clifd,char* buf,int len);
	void my_err(const char* err_string,int line);
	int my_recv(int conn_fd,char* data_buf,int len);
#endif
