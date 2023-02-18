#include "main.h"
#include "iostream"

int main() {
    ComplexNumber test(0, 0);
    ComplexNumber test2(0, 0);


    std::cin >> test >> test2;
    std::cout << "First complex: " << test;
    std::cout << "Second complex: " << test2;

    std::cout << "Result: "<< test * test2;
}
