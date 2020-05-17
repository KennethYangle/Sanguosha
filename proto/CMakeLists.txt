file(GLOB PROTOFILES *.proto)

add_library(proto ${PROTOBUFSRCS} ${PROTOBUFHDRS})
message("PROTOBUFSRCS: " ${PROTOBUFSRCS})
message("PROTOBUFHDRS: " ${PROTOBUFHDRS})

target_link_libraries(proto protobuf)
# target_include_directories(proto PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
message("CMAKE_CURRENT_BINARY_DIR: " ${CMAKE_CURRENT_BINARY_DIR})