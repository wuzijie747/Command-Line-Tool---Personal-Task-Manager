cmake_minimum_required(VERSION 3.27)
project(untitled) # 或者 project(untitled4)，取决于您的选择

set(CMAKE_CXX_STANDARD 17) # 或者 set(CMAKE_CXX_STANDARD 17)，取决于您的选择

# 添加Python头文件目录（如果需要的话，根据实际情况修改路径）
# include_directories(/path/to/python/include)

# 添加可执行文件目标
add_executable(untitled main.cpp)

# 为可执行文件目标指定链接库
target_link_libraries(untitled PRIVATE winmm)
