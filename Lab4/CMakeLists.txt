cmake_minimum_required(VERSION 3.24)
project(test1)

set(CMAKE_CXX_STANDARD 14)

add_executable(test1
        main.cpp src/interface/interface.h src/triangle/triangle.h src/triangle/triangle.cpp src/interface/interface.cpp src/hexagon/hexagon.h src/hexagon/hexagon.cpp src/menu/menu.h src/menu/menu.cpp)
