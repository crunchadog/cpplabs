#include "CircularBuffer.h"

template<typename T>
CircularBuffer<T>::CircularBuffer(int s) {
    this->size = s;
    data = new T[size];
}

template<typename T>
CircularBuffer<T>::~CircularBuffer() = default;

template<typename T>
T &CircularBuffer<T>::front() {
    return data[indexIn];
}

template<typename T>
T &CircularBuffer<T>::back() {
    return data[endIndex];
}

template<typename T>
void CircularBuffer<T>::push_front(T elem) {

    int i = (indexIn == 0) ? indexOut : indexIn--;

    data[i] = elem;
}

template<typename T>
void CircularBuffer<T>::pop_front() {
    indexIn++;
}

template<typename T>
void CircularBuffer<T>::push_back(T elem) {
    data[++indexOut] = elem;

    if (indexOut >= size) {
        indexOut = 0;
    }

    endIndex++;
}

template<typename T>
void CircularBuffer<T>::pop_back() {
    indexOut--;
}

template<typename T>
T &CircularBuffer<T>::operator[](int index) {
    if (index >= size) {
        throw Exception::overflowException;
    }

    return data[index];
}