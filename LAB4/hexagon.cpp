#include "hexagon.h"
#include "cmath"

hexagon::hexagon() = default;

hexagon::~hexagon() = default;

double hexagon::square() const {
    double side = (B.x - A.x) * (B.y - A.y) -
                  (C.x - B.x) * (C.y - B.y) -
                  (D.x - C.x) * (D.y - C.y) -
                  (E.x - D.x) * (E.y - D.y) -
                  (F.x - E.x) * (F.y - E.y) -
                  (A.x - F.x) * (A.y - F.y);

    return ((3 * sqrt(3)) / 2) * side * side;
}

double hexagon::perimeter() const {
    return (B.x - A.x) * (B.y - A.y) +
           (C.x - B.x) * (C.y - B.y) +
           (D.x - C.x) * (D.y - C.y) +
           (E.x - D.x) * (E.y - D.y) +
           (F.x - E.x) * (F.y - E.y) +
           (A.x - F.x) * (A.y - F.y);
}

double hexagon::mass() const {
    return weight;
}

CVector2D hexagon::position() const {
    CVector2D center;

    center.x = (A.x + B.x + C.x + D.x + E.x + F.x) / 6;
    center.y = (A.y + B.y + C.y + D.y + E.y + F.y) / 6;

    return center;
}

bool hexagon::operator==(const IPhysObject &obj) const {
    return mass() == obj.mass();
}

bool hexagon::operator<(const IPhysObject &obj) const {
    return mass() < obj.mass();
}


void hexagon::draw() const {
    std::cout << "Name: " << classname() << '\n';
    std::cout << "Weight: " << weight << '\n';
    std::cout << "Position: " << position() << '\n';
    std::cout << "Size: " << size() << '\n';
    std::cout << '\n';
}

void hexagon::initFromDialog() {
    std::cout << "Add first coords:";
    std::cin >> A;
    std::cout << "Add second coords:";
    std::cin >> B;
    std::cout << "Add third coords:";
    std::cin >> C;
    std::cout << "Add 4 coords:";
    std::cin >> D;
    std::cout << "Add 5 coords:";
    std::cin >> E;
    std::cout << "Add 6 coords:";
    std::cin >> F;
    std::cout << "Add weight:";
    std::cin >> weight;
}

const char* hexagon::classname() const {
    return figure_name;
}

unsigned hexagon::size() const {
    return sizeof(*this);
}