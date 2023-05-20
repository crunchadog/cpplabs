cmake_minimum_required(VERSION 3.24)
project(Lab6)

set(CMAKE_CXX_STANDARD 23)

add_executable(Lab6 main.cpp src/Functions/none_of.h src/App/App.cpp src/CPoint/CPoint.h src/CPoint/CPoint.cpp src/App/App.h src/Functions/is_sorted.h src/Functions/find_not.h)
