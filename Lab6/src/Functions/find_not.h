#ifndef LAB6_FIND_NOT_H
#define LAB6_FIND_NOT_H

namespace Functions {
    template<typename Iterator, typename T>
    Iterator find_not(Iterator first, Iterator last, const T& value) {
        for (Iterator it = first; it != last; ++it) {
            if (*it != value) {
                return it;
            }
        }

        return last;
    }
}

#endif
