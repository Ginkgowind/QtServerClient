include(CheckFunctionExists)

check_function_exists(accept4 HAVE_ACCEPT4)
if(NOT HAVE_ACCEPT4)
  set_source_files_properties(SocketsOps.cc PROPERTIES COMPILE_FLAGS "-DNO_ACCEPT4")
endif()

# set(net_SRCS
#   Acceptor.cc
#   Buffer.cc
#   Channel.cc
#   Connector.cc
#   EventLoop.cc
#   EventLoopThread.cc
#   EventLoopThreadPool.cc
#   InetAddress.cc
#   Poller.cc
#   poller/DefaultPoller.cc
#   poller/EPollPoller.cc
#   poller/PollPoller.cc
#   Socket.cc
#   SocketsOps.cc
#   TcpClient.cc
#   TcpConnection.cc
#   TcpServer.cc
#   Timer.cc
#   TimerQueue.cc
#   )
aux_source_directory(. net_SRCS)
set(net_SRCS ${net_SRCS} 
  poller/DefaultPoller.cc
  poller/EPollPoller.cc
  poller/PollPoller.cc
)

add_library(muduo_net ${net_SRCS})
target_link_libraries(muduo_net muduo_base)
target_include_directories(muduo_net PUBLIC ../../)
