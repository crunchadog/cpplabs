#include "CircularBuffer.h"

template<typename T>
CircularBuffer<T>::CircularBuffer(int _capacity) :
        _capacity(_capacity), buffer(new T[_capacity]), buffer_size(0), head(0), tail(0) {}

template<typename T>
CircularBuffer<T>::~CircularBuffer() {
    delete[] buffer;
}

template<typename T>
T &CircularBuffer<T>::operator[](int index) {
    if (index >= buffer_size) {
        throw std::out_of_range("Invalid index");
    }
    return buffer[(head + index) % _capacity];
}

template<typename T>
void CircularBuffer<T>::pop_front() {
    if (empty()) {
        throw std::out_of_range("Buffer is empty");
    }
    head = (head + 1) % _capacity;
    buffer_size--;
}

template<typename T>
void CircularBuffer<T>::push_front(T value) {
    if (full()) {
        throw std::out_of_range("Buffer is full");
    }
    head = (head + _capacity - 1) % _capacity;
    buffer[head] = value;
    buffer_size++;
}

template<typename T>
void CircularBuffer<T>::pop_back() {
    if (empty()) {
        throw std::out_of_range("Buffer is empty");
    }
    tail = (tail + _capacity - 1) % _capacity;
    buffer_size--;
}

template<typename T>
void CircularBuffer<T>::push_back(T value) {
    if (full()) {
        throw std::out_of_range("Buffer is full");
    }
    buffer[tail] = value;
    tail = (tail + 1) % _capacity;
    buffer_size++;
}

template<typename T>
T &CircularBuffer<T>::back() {
    if (empty()) {
        throw std::out_of_range("Buffer is empty");
    }
    return buffer[(tail + _capacity - 1) % _capacity];
}

template<typename T>
T &CircularBuffer<T>::front() {
    if (empty()) {
        throw std::out_of_range("Buffer is empty");
    }
    return buffer[head];
}

template<typename T>
bool CircularBuffer<T>::full() {
    return buffer_size == _capacity;
}

template<typename T>
bool CircularBuffer<T>::empty() {
    return buffer_size == 0;
}

template<typename T>
int CircularBuffer<T>::capacity() {
    return _capacity;
}

template<typename T>
int CircularBuffer<T>::size() {
    return buffer_size;
}