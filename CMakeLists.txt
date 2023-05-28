cmake_minimum_required(VERSION 3.24)
project(Lab7)

set(CMAKE_CXX_STANDARD 23)

add_executable(Lab7 main.cpp src/App/App.h src/App/App.cpp src/Exception/BufferOverflowException.h src/Exception/BufferOverflowException.cpp src/CircularBuffer/CircularBuffer.h src/CircularBuffer/CircularBuffer.cpp)
