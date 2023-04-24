#ifndef LAB4_4_IPHYSOBJECT_H
#define LAB4_4_IPHYSOBJECT_H

#include "../CVector2D/CVector2D.h"

class IPhysObject {
public:
// Масса, кг.
    virtual double mass() const = 0;

// Координаты центра масс, м.
    virtual CVector2D position() const = 0;

// Сравнение по массе.
    virtual bool operator==(const IPhysObject &ob) const = 0;

// Сравнение по массе.
    virtual bool operator<(const IPhysObject &ob) const = 0;
};
#endif
