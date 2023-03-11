#include "interface.h"

CVector2D::CVector2D() {
    x = 0;
    y = 0;
}

std::ostream &operator<<(std::ostream &output, const CVector2D &vec) {
    return output << "(" << vec.x << "; " << vec.y << ")";
}

std::istream &operator>>(std::istream &input, CVector2D &vec) {
    return input >> vec.x >> vec.y;
}


