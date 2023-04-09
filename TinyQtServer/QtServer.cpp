#include "QtServer.h"

#include "muduo/base/Logging.h"

using std::placeholders::_1;
using std::placeholders::_2;
using std::placeholders::_3;

// using namespace muduo;
// using namespace muduo::net;

QtServer::QtServer(muduo::net::EventLoop *loop,
                   const muduo::net::InetAddress &listenAddr)
    : server_(loop, listenAddr, "QtServer")
{
    server_.setConnectionCallback(
        std::bind(&QtServer::onConnection, this, _1));
    server_.setMessageCallback(
        std::bind(&QtServer::onMessage, this, _1, _2, _3));
}

void QtServer::start()
{
    server_.start();
}

void QtServer::onConnection(const muduo::net::TcpConnectionPtr &conn)
{
    LOG_INFO << "QtServer - " << conn->peerAddress().toIpPort() << " -> "
             << conn->localAddress().toIpPort() << " is "
             << (conn->connected() ? "UP" : "DOWN");

    conn->send("Hello , new user!");
}

void QtServer::onMessage(const muduo::net::TcpConnectionPtr &conn,
                         muduo::net::Buffer *buf,
                         muduo::Timestamp time)
{
    muduo::string msg(buf->retrieveAllAsString());
    LOG_INFO << conn->name() << " echo " << msg.size() << " bytes, "
             << "data received at " << time.toString();
    conn->send(msg);
}
