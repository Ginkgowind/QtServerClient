#pragma once

#include "muduo/net/TcpServer.h"

class QtServer
{
public:
    QtServer(muduo::net::EventLoop *loop,
             const muduo::net::InetAddress &listenAddr);

    void start(); // calls server_.start();

private:
    void onConnection(const muduo::net::TcpConnectionPtr &conn);

    void onMessage(const muduo::net::TcpConnectionPtr &conn,
                   muduo::net::Buffer *buf,
                   muduo::Timestamp time);

    muduo::net::TcpServer server_;
};