#ifndef LAB7_CIRCULARBUFFER_H
#define LAB7_CIRCULARBUFFER_H

#include "../Exception/BufferOverflowException.h"

template<typename T>
class CircularBuffer {
private:
    T *data;

    int indexIn = 0;

    int indexOut = 0;

    int endIndex = 0;

    int size = 0;

public:
    explicit CircularBuffer(int value);

    ~CircularBuffer();

    T &front();

    T &back();

    void push_front(T elem);

    void pop_front();

    void push_back(T elem);

    void pop_back();

    T& operator[](int index);
};

#endif
