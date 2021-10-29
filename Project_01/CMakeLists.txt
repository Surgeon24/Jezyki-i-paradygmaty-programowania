cmake_minimum_required(VERSION 3.20)
project(Project_01)

set(CMAKE_CXX_STANDARD 14)

add_library(
        matrix_lib
        matrixLib/matrix.h
        matrixLib/matrix.cpp
)

add_executable(Project_01 matrixApp/main.cpp matrixLib/matrix.cpp matrixLib/matrix.h)

target_link_libraries(Project_01 PRIVATE matrix_lib)