cmake_minimum_required(VERSION 3.20)
project(lab_12_01)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_12_01 src/main.cpp include/TimeMeasure.h src/TimeMeasure.cpp)
target_include_directories(lab_12_01 PUBLIC include)
target_link_libraries(lab_12_01 pthread)