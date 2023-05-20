#ifndef LAB6_CPOINT_H
#define LAB6_CPOINT_H

class CPoint
{
public:
    CPoint(int x, int y);

    int getX() const;
    int getY() const;

private:
    int m_x;
    int m_y;
};

#endif
