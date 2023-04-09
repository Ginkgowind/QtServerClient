# set(base_SRCS
#   AsyncLogging.cc
#   Condition.cc
#   CountDownLatch.cc
#   CurrentThread.cc
#   Date.cc
#   Exception.cc
#   FileUtil.cc
#   LogFile.cc
#   Logging.cc
#   LogStream.cc
#   ProcessInfo.cc
#   Timestamp.cc
#   Thread.cc
#   ThreadPool.cc
#   TimeZone.cc
#   )
aux_source_directory(. base_SRCS)

add_library(muduo_base ${base_SRCS})
target_include_directories(muduo_base PUBLIC ../../)

target_link_libraries(muduo_base pthread rt)