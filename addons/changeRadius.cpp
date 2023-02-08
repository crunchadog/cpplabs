#include "iostream"
#include "../header.h"

void changeCircleRadiusLink(double &r, double &d) {
    double &radius = r;
    double &decrease = d;
    double result = radius - decrease;
    if (result > 0) {
        radius = result;
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