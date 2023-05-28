#ifndef LAB7_BUFFEROVERFLOWEXCEPTION_H
#define LAB7_BUFFEROVERFLOWEXCEPTION_H

#include <exception>

namespace Exception {
    class BufferOverflowException : public std::exception {
    public:
        virtual const char* message() const noexcept;
    } overflowException;
}

#endif 
