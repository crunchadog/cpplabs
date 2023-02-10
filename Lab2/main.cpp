#include <iostream>
#include "main.h"

int main() {
    vectorR3 vec1(12.3, -18, 16);
    vectorR3 vec2(18.7, 16, 14.28);

    vec1.angleWithADifferentVector(vec2);
    std::cout << '\n';
    std::cout << vec2;
}