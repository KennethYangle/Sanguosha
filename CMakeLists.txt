cmake_minimum_required (VERSION 2.8)
project (Sanguosha)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread -lprotobuf -std=c++11")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
message("PROTOBUF_INCLUDE_DIRS: " ${PROTOBUF_INCLUDE_DIRS})
include_directories(include) #添加头文件
message("PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/proto)

# file(GLOB PROTOFILES ${PROJECT_SOURCE_DIR}/proto/*.proto)
# protobuf_generate_cpp(PROTOBUFSRCS PROTOBUFHDRS ${PROTOFILES})
file(GLOB PROTOBUFSRCS ${PROJECT_SOURCE_DIR}/proto/*.pb.cc)
file(GLOB PROTOBUFHDRS ${PROJECT_SOURCE_DIR}/proto/*.pb.h)
message("PROTOBUFSRCS: " ${PROTOBUFSRCS})
message("PROTOBUFHDRS: " ${PROTOBUFHDRS})

add_subdirectory(proto)
add_subdirectory(src)