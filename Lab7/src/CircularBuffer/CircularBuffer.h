#include <iostream>
#include <exception>

template<typename T>
class CircularBuffer {
private:
    T *buffer;
    int _capacity; 
    int buffer_size;
    int head;
    int tail;
public:
    explicit CircularBuffer(int _capacity);

    ~CircularBuffer();

    int size();

    int capacity();

    bool empty();

    bool full();

    T &front();

    T &back();

    void push_back(T value);

    void pop_back();

    void push_front(T value);

    void pop_front();

    T &operator[](int index);
};




