#ifndef LAB5_STACK_H
#define LAB5_STACK_H

#include <iostream>
#include "../Exception/StackExceptions.h"
#include "../Exception/EmptyStackException.h"

struct Node {
    int data;
    Node *next;
};

template<class T>
class Stack {
private:
    T *top;
    int size;
public:
    Stack();

    void push(T elem);

    T pop();

    bool isEmpty();

    int StackSize(Stack);

};


#endif //LAB5_STACK_H
