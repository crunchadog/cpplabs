cmake_minimum_required(VERSION 3.24)
project(test1)

set(CMAKE_CXX_STANDARD 14)

add_executable(test1
        main.cpp interface.h triangle.h triangle.cpp interface.cpp hexagon.h hexagon.cpp)
