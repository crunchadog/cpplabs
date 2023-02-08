#include "iostream"
#include "../header.h"
#include <cmath>

void roundNumberLink(double &num) {
    double result;
    result = std::round(num);
    num = result;
}

void roundNumberPointer(double *num) {
    double result;
    result = std::round(*num);
    *num = result;
}