cmake_minimum_required(VERSION 3.20)
project(lab_12_02)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_12_02 main.cpp)

target_link_libraries(lab_12_02 pthread)