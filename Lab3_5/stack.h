#ifndef LAB3_5_STACK_H
#define LAB3_5_STACK_H

#include "iostream"

class stack {
private:
    int *array;
    int size;
public:
    stack();

    ~stack();

    int getSize() const;

    void push(int value);

    int pop();

    friend std::ostream &operator<<(std::ostream &output, stack &st);

    friend std::istream &operator>>(std::istream &input, stack &st);
};

int start();

#endif
