# 可执行文件添加到bin
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
aux_source_directory(. DIR_MAIN_SRCS)
add_executable(sanguosha ${DIR_MAIN_SRCS})
target_link_libraries(sanguosha card generals)
# 安装到默认路径/usr/local/bin
install(TARGETS sanguosha)