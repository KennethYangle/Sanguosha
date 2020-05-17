cmake_minimum_required (VERSION 2.8)   #版本要求
project (Sanguosha)                     #工程名称
#find_package(OpenCV REQUIRED)

#link_libraries(${Opencv_LIBS})
#message(${Opencv_LIBS})

include_directories(include) #添加头文件
ADD_SUBDIRECTORY(src)