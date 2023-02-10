#ifndef CPPLION_MAIN_H
#define CPPLION_MAIN_H


class vectorR3 {
private:
    double x;
    double y;
    double z;

public:
    vectorR3(double x1, double y1, double z1) {x = x1; y = y1; z = z1;} // Конструктор по умолчанию.

    vectorR3(const vectorR3 &other) {x = other.x; y = other.y; z = other.z;} // Конструктор копированиия.

    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

    double lenghtVector() const;
    double angleWithADifferentVector() const;

    double angleWithADifferentVector(vectorR3 &other) const;

    vectorR3 operator+(vectorR3 &other) const;
    vectorR3 operator-(vectorR3 &other) const;

};

std::ostream &operator<<(std::ostream &output, const vectorR3 &otherV);

#endif //CPPLION_MAIN_H
