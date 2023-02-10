#include "iostream"
#include "../header.h"

void changeCircleRadiusLink(double &r, double &d) {
    double result = r - d;
    if (result > 0) {
        r = result;
    } else {
        std::cout << "Radius < 0";
    }
}

void changeCircleRadiusPointer(double *r, double *d) {
    double result;
    result = *r - *d;
    if (result > 0) {
        *r = result;
    } else {
        std::cout << "Radius < 0";
    }
}