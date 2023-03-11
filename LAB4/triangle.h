#ifndef TEST1_TRIANGLE_H
#define TEST1_TRIANGLE_H

#include "interface.h"

class triangle : public Figure {
private:
    CVector2D A;
    CVector2D B;
    CVector2D C;

    double weight = 0;
    const char *figure_name = "Triangle";
public:

    triangle();

    ~triangle();

    double square() const override;

    double perimeter() const override;

    double mass() const override;

    CVector2D position() const override;

    bool operator==(const IPhysObject &obj) const override;

    bool operator<(const IPhysObject &obj) const override;

    void draw() const override;

    void initFromDialog() override;

    const char *classname() const override;

    unsigned int size() const override;
};


#endif
