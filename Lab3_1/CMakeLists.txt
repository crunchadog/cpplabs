cmake_minimum_required(VERSION 3.24)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab3
        main.cpp
        main.h realisation.cpp)
