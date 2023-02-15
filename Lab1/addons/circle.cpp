#include "circle.h"
#include "iostream"

Circle::Circle() {
    r = d = 0.0;
}

Circle::Circle(double rad, double dec) {
    r = rad;
    d = dec;
}

Circle::Circle(const Circle &other) {
    r = other.r;
    d = other.d;
}

double Circle::getR() const {
    return r;
}

void Circle::setR(double r) {
    Circle::r = r;
}

double Circle::getD() const {
    return d;
}

void Circle::setD(double d) {
    Circle::d = d;
}

void Circle::changeR(Circle &circle) {
    double radius = circle.getR();
    double dec = circle.getD();

    circle.setR(radius - dec);
}

void Circle::changeR(Circle *circle) {
    double radius = circle->getR();
    double dec = circle->getD();

    circle->setR(radius - dec);
};

Circle::~Circle() {};

int startProg() {
    double rad, dec;
    std::cin >> rad >> dec;
    Circle *circle = new Circle(rad, dec);

    std::cout << circle->getR() << " " << circle->getD() << '\n';

    Circle::changeR(*circle);

    std::cout << circle->getR() << " " << circle->getD() << '\n';


    std::cout <<"---------------------------------------------" << '\n';
    std::cout << circle->getR() << " " << circle->getD() << '\n';

    Circle::changeR(circle);

    std::cout << circle->getR() << " " << circle->getD() << '\n';
    std::cout <<"---------------------------------------------" << '\n';

    delete circle;


}
