#include <iostream>
#include "header.h"


int main() {
    int a;
    int b;
    std::cin >> a >> b;

    changeHighestNumberLink(a, b);
    changeHighestNumberPointer(&a, &b);
    std::cout << std::endl;
    std::cout << "-------------" << '\n';
    std::cout << a << " " << b << '\n';
    std::cout << "-------------" << '\n';

}