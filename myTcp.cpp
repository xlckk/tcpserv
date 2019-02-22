#include "myTcp.h"
#include <sys/socket.h>
// 构造函数
myTcp::myTcp()
{}
// 析构函数
myTcp::~myTcp()
{}
// 创建套接字
void myTcp::create()
{
  serv_=socket(AF_INET,SOCK_STREAM,0);
}
