#include "stack.h"
#include "iostream"


stack::stack() {
    array = nullptr;
    size = 0;
}

stack::~stack() {
    delete[] array;
}

int stack::getSize() const {
    return size;
}

void stack::push(int value) {
    int *temp = new int[size + 1];

    for (int i = 0; i < size; ++i) {
        temp[i] = array[i];
    }

    temp[size++] = value;

    delete[] array;

    array = temp;
}

int stack::pop() {
    int *temp = nullptr;

    int value = 0;

    if (size == 0) {
        return 0;
    }

    size--;

    value = array[0];

    if (size != 0) {
        temp = new int[size];

        for (int i = 0; i < size; ++i) {
            temp[i] = array[i];
        }
        value = array[size];
    }

    delete[] array;
    array = temp;

    return value;
}

std::ostream &operator<<(std::ostream &output, stack &st) {
    if (st.getSize()) {
        output << st.pop() << " ";
    }
}

std::istream &operator>>(std::istream &input, stack &st) {
    for (int i = 0; i < 10; ++i) {
        int num;
        input >> num;
        st.push(num);
    }

    return input;
}

int start() {
    setlocale(LC_ALL, "ru");
    stack st;
    std::cin >> st;
    std::cout << "Значения в стеке:";
    while (st.getSize()) {
        std::cout << st;
    }
    return 0;
}

