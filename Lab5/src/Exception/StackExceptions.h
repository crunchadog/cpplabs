#ifndef LAB5_STACKEXCEPTIONS_H
#define LAB5_STACKEXCEPTIONS_H

#include <stdexcept>

namespace Exception {
    class StackExceptions: public std::logic_error {
    public:
        explicit StackExceptions(const char* message):std::logic_error(message) {}
    };
}





#endif //LAB5_STACKEXCEPTIONS_H
