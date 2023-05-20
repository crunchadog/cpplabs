#ifndef LAB6_NONE_OF_H
#define LAB6_NONE_OF_H

using namespace std;

namespace Functions {
    template<class Iterator, class Predicate>
    bool none_of(Iterator begin, Iterator end, Predicate p) {
        for (Iterator it = begin; begin != end  ; begin++) {
            if (p(*begin)) {
                return false;
            }
        }

        return true;
    }
}


#endif
