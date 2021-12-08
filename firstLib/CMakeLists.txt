cmake_minimum_required(VERSION 3.20)
project(firstLib)

set(CMAKE_CXX_STANDARD 14)

add_executable(firstLib main.cpp lib.cpp lib.h)

target_link_libraries(firstLib firstLib)