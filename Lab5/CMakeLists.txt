cmake_minimum_required(VERSION 3.23)
project(lab5)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab5 main.cpp src/Stack/Stack.h src/Stack/Stack.cpp src/Exception/StackExceptions.h
        src/App/App.h src/App/App.cpp src/Swap/Swap.h)
