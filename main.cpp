#include <iostream>
#include "header.h"


int main() {
    int a;
    int b;
    double r;
    std::cin >> r;

    double decrease;
    std::cin >> decrease;

    std::cout <<"Before:" << r << '\n';
//    changeHighestNumberLink(a, b);
//    changeHighestNumberPointer(&a, &b);
//    changeCircleRadiusLink(r, decrease);
    changeCircleRadiusPointer(&r, &decrease);
    std::cout <<"After:" << r << '\n';


//    std::cout << std::endl;
    std::cout << "-------------" << '\n';
    std::cout << r << '\n';
    std::cout << "-------------" << '\n';

}