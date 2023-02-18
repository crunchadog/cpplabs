#include "main.h"
#include "iostream"

ComplexNumber::ComplexNumber() {
    real = image = 0;
}

ComplexNumber::ComplexNumber(ComplexNumber &other) {
    real = other.real;
    image = other.image;
}

ComplexNumber::ComplexNumber(double otherReal, double otherImaginary) {
    real = otherReal;
    image = otherImaginary;
}

double ComplexNumber::getReal() const {
    return real;
}

void ComplexNumber::setReal(double real) {
    ComplexNumber::real = real;
}

double ComplexNumber::getImage() const {
    return image;
}

void ComplexNumber::setImage(double image) {
    ComplexNumber::image = image;
}

ComplexNumber ComplexNumber::operator+(ComplexNumber &other) const {
    other.real = real + other.real;
    other.image = image + other.image;
    return other;
}

ComplexNumber ComplexNumber::operator*(ComplexNumber &other) const {
    double temp, temp2;
    temp = real * other.real - image * other.image;
    temp2 = real * other.image + other.real * image;
    other.real = temp;
    other.image = temp2;
    return other;
}

ComplexNumber ComplexNumber::operator*(double &other) const {
    ComplexNumber complex;
    double temp, temp2;
    temp = real * other;
    temp2 = image * other;
    complex.real = temp;
    complex.image = temp2;
    return complex;
}


std::ostream &operator<<(std::ostream &output, const ComplexNumber &otherVal) {
    return output << otherVal.getReal() << " + " << otherVal.getImage() << "i" << '\n';
}

std::istream &operator>>(std::istream &input, ComplexNumber &otherVal) {
    input >> otherVal.real >> otherVal.image;
    return input;
}

ComplexNumber::~ComplexNumber() = default;
