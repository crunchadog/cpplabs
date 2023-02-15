#ifndef CPPLABS_CIRCLE_H
#define CPPLABS_CIRCLE_H

int startProg();

class Circle {
private:
    double r;
    double d;
public:
    Circle();

    Circle(double rad, double dec); // По умолчанию.

    Circle(const Circle &other); // Копирования.

    ~Circle();

    double getR() const;

    void setR(double r);

    double getD() const;

    void setD(double d);

    static void changeR(Circle &circle);
    static void changeR(Circle *circle);
};

#endif
