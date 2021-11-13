cmake_minimum_required(VERSION 3.20)
project(lab5_2)
include_directories(include)
set(CMAKE_CXX_STANDARD 14)

add_executable(lab5_2 src/main.cpp src/train.cpp include/train.h)
