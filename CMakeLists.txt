cmake_minimum_required(VERSION 3.27)
project(untitled) # 或者 project(untitled4)，取决于您的选择

set(CMAKE_CXX_STANDARD 17) # 或者 set(CMAKE_CXX_STANDARD 17)，取决于您的选择

# 添加Python头文件目录
include_directories("Python311/include")

# 添加Python库文件目录
link_directories("Python311/libs")
add_executable(untitled main.cpp)


set(LIBS python311)

target_link_libraries(untitled  ${LIBS})