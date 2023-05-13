#include "Stack.h"

template<class T>
Stack<T>::Stack() {
    top = nullptr;
    size = 0;
}

template<class T>
void Stack<T>::push(T elem) {
    Node *temp = new Node();

    temp->data = elem;
    temp->next = top;

    top   = temp;
    size += 1;

    delete temp;
}

template<class T>
T Stack<T>::pop() {
    Node *temp;

    if (isEmpty()) {
        throw EmptyStackException();
    } else {
        T value = top->data;

        temp = top;
        top  = top->next;
        free(temp);

        size -= 1;

        return value;
    }
}

template<class T>
bool Stack<T>::isEmpty() {
    return top == nullptr;
}

template<class T>
int Stack<T>::StackSize(Stack<T>) {
    return size;
}