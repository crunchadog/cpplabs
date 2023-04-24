#ifndef LAB4_4_CVECTOR2D_H
#define LAB4_4_CVECTOR2D_H

#include "iostream"

class CVector2D {
public:
    double x, y;

    CVector2D();

    friend std::ostream &operator<<(std::ostream &output, const CVector2D &vec);

    friend std::istream &operator>>(std::istream &input, CVector2D &vec);

};

#endif
