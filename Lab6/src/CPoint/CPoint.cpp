#include "iostream"
#include "CPoint.h"


CPoint::CPoint(int x, int y) {
    m_x = x;
    m_y = y;
}

int CPoint::getX() const {
    return m_x;
}

int CPoint::getY() const {
    return m_y;
}

