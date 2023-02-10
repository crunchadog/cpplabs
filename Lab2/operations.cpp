#include "iostream"
#include "main.h"
#include "cmath"

vectorR3 operator+(vectorR3 &other);

double vectorR3::lenghtVector() const {
    return sqrt(x * x + y * y + z * z);
}

double vectorR3::angleWithADifferentVector(vectorR3 &other) const {
    double res1 = (x * other.x + y * other.y + z * other.z)
                  / (sqrt(x * x + y * y + z * z) *
                     sqrt(other.x * other.x + other.y * other.y + other.z * other.z));
    std::cout << "cosA = " << res1;
    return res1;
}


vectorR3 vectorR3::operator+(vectorR3 &other) const {
    return vectorR3(other.x + x, other.y + y, other.z + z);
}

std::ostream &operator<<(std::ostream &output, const vectorR3 &otherV) {
    return output << "(" << otherV.getX() << ", " << otherV.getY()
                  << ", " << otherV.getZ() << ")" << '\n';
}