aux_source_directory(. DIR_MAIN_SRCS)

# add_executable(sanguosha ${DIR_MAIN_SRCS})
# target_link_libraries(sanguosha card generals proto)

add_executable(test_proto test_proto.cpp)
target_link_libraries(test_proto proto)

# 安装到默认路径/usr/local/bin
# install(TARGETS sanguosha)