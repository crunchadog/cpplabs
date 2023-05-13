#ifndef LAB5_STACKEXCEPTIONS_H
#define LAB5_STACKEXCEPTIONS_H

#include <stdexcept>

class StackExceptions: public std::logic_error {
public:
        explicit StackExceptions(const char* message):std::logic_error(message) {}
    };

class EmptyStackException : public StackExceptions {
public:
    explicit EmptyStackException() : StackExceptions("Stack is empty"){}
};

#endif //LAB5_STACKEXCEPTIONS_H
