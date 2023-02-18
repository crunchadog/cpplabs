#ifndef LAB3_MAIN_H
#define LAB3_MAIN_H

#include <ostream>
#include <istream>

class ComplexNumber {
private:
    double real;
    double image;
public:
    ComplexNumber(); // Конструктор по умолчанию.

    ComplexNumber(double otherReal, double otherImaginary); // Конструктор по умолчанию с параметром.

    ComplexNumber(ComplexNumber &other); // Конструктор копирования.

    double length() const;

    double getReal() const;

    void setReal(double real);

    double getImage() const;

    void setImage(double image);

    ComplexNumber operator+(ComplexNumber &other) const;


    ComplexNumber operator*(ComplexNumber &other) const;
    ComplexNumber operator*(double &other) const;

    friend std::ostream &operator<<(std::ostream &output, const ComplexNumber &otherVal);
    friend std::istream &operator>>(std::istream &input, ComplexNumber &otherVal);

    ~ComplexNumber();

};

#endif
