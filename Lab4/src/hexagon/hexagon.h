#ifndef TEST1_HEXAGON_H
#define TEST1_HEXAGON_H

//#include "interface.h"
#include "../triangle/triangle.h"

namespace Hexagon {
    class hexagon : public Figure {
    private:
        CVector2D A;
        CVector2D B;
        CVector2D C;
        CVector2D D;
        CVector2D E;
        CVector2D F;

        double weight = 0;
        const char *figure_name = "Hexagon";

    public:
        hexagon();

        ~hexagon();

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
}


#endif //TEST1_HEXAGON_H
