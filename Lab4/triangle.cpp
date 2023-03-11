#include "iostream"
#include "triangle.h"
#include "cmath"

triangle::triangle() = default;

triangle::~triangle() = default;

double triangle::square() const {

    // AB = (B.x - A.x) * (B.y - A.y);
    // AC = (C.x - A.x) * (C.y - A.y);
    // BC = (C.x - B.x) * (C.y - B.y);

    return (((B.x - A.x) * (B.y - A.y)) - (C.x - A.x) * (C.y - A.y) - (C.x - B.x) * (C.y - B.y)) / 2;
}

double triangle::perimeter() const {
    return ((B.x - A.x) * (B.y - A.y)) * 3;
}

double triangle::mass() const {
    return weight;
}

CVector2D triangle::position() const {
    CVector2D center;

    center.x = (A.x + B.x + C.x) / 3;
    center.y = (A.y + B.y + C.y) / 3;

    return center;
}

bool triangle::operator==(const IPhysObject &obj) const {
    return mass() == obj.mass();
}

bool triangle::operator<(const IPhysObject &obj) const {
    return mass() < obj.mass();
}

void triangle::draw() const {
    std::cout << "Name: " << figure_name << '\n';
    std::cout << "Weight: " << weight << '\n';
    std::cout << "Position: " << position() << '\n';
    std::cout << "Size: " << size() << '\n';
    std::cout << '\n';
}

void triangle::initFromDialog() {
    std::cout << "Add first coords:";
    std::cin >> A;
    std::cout << "Add second coords:";
    std::cin >> B;
    std::cout << "Add third coords:";
    std::cin >> C;
    std::cout << "Add weight:";
    std::cin >> weight;
}

const char* triangle::classname() const {
    return figure_name;
}

unsigned triangle::size() const {
    return sizeof(*this);
}
