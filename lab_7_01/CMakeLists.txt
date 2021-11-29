cmake_minimum_required(VERSION 3.20)
project(lab_7_01)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_7_01 src/main.cpp src/Rectangle.cpp src/Circle.cpp include/Figure.h include/Circle.h include/Rectangle.h)
