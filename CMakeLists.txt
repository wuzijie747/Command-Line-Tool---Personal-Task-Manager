cmake_minimum_required(VERSION 3.27)
project(untitled) # 或者 project(untitled4)，取决于您的选择

set(CMAKE_CXX_STANDARD 11) # 或者 set(CMAKE_CXX_STANDARD 17)，取决于您的选择

add_executable(untitled main.cpp library/Create.h)
# 或者 add_executable(untitled4 main.cpp library/Create.h)，如果选择了项目名称为 untitled4
