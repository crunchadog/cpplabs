#ifndef LAB5_EMPTYSTACKEXCEPTION_H
#define LAB5_EMPTYSTACKEXCEPTION_H

#include "StackExceptions.h"

namespace Exception {
    class EmptyStackException : Exception::StackExceptions{
    public:
        explicit EmptyStackException() : StackExceptions("Stack is empty"){}
    };
}

#endif
