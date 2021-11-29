cmake_minimum_required(VERSION 3.20)
project(lab_8_1)

set(CMAKE_CXX_STANDARD 14)

add_library(lab_8_1 src/main.cpp include/car.h include/human.h)
