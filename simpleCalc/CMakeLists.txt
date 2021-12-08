cmake_minimum_required(VERSION 3.20)
project(simpleCalc)

set(CMAKE_CXX_STANDARD 14)

add_executable(simpleCalc src/main.cpp src/calc.cpp include/calc.h)
