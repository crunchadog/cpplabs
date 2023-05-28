#include "BufferOverflowException.h"

const char *Exception::BufferOverflowException::message() const noexcept {
    return "Buffer is overflow";
}
