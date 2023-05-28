#include "App.h"

#include "iostream"
#include "algorithm"

int App::start() {
    CircularBuffer<int> buffer(5);

    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_back(3);

    std::cout << "Size: " << buffer.size() << std::endl;

    buffer.push_front(0);

    std::cout << "Front: " << buffer.front() << std::endl;
    std::cout << "Back: " << buffer.back() << std::endl;

    buffer.pop_back();

    std::cout << "Size: " << buffer.size() << std::endl;

    std::cout << "Elements:";
    for (std::size_t i = 0; i < buffer.size(); ++i) {
        std::cout << " " << buffer[i];
    }
    std::cout << std::endl; // Output: Elements: 0 1 3

    return 0;
}
