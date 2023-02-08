cmake_minimum_required(VERSION 3.24)
project(cpplion)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpplion main.cpp header.h addons/heighestNum.cpp addons/changeRadius.cpp addons/roundNumber.cpp)
