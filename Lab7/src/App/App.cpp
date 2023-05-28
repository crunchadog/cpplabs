#include "App.h"

#include "iostream"

int App::start() {
    CircularBuffer<int> circularBuffer(3);

    circularBuffer.push_front(2);
    circularBuffer.push_front(4);
    circularBuffer.push_front(6);
    circularBuffer.push_front(8);
    circularBuffer.push_front(10);

    circularBuffer.pop_front();
    circularBuffer.pop_back();

    circularBuffer.front();

    try{
        circularBuffer[228];
    }
    catch (Exception::BufferOverflowException &ex){
        std::cout << ex.message() << '\n';
    }
}
