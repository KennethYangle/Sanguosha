# 库添加到lib
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
aux_source_directory(. DIR_GENERAL_SRCS)
add_library(generals ${DIR_GENERAL_SRCS})
