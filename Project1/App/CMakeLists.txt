cmake_minimum_required(VERSION 3.20)
project(Project1)

set(CMAKE_CXX_STANDARD 14)
include_directories(../Library/include)

add_library(Lib STATIC ../src/lib.cpp ../src/lib.cpp)
