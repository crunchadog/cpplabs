#ifndef LAB6_IS_SORTED_H
#define LAB6_IS_SORTED_H

using namespace std;
namespace Functions {
    template<typename Iterator, typename Compare>
    bool is_sorted(Iterator first, Iterator end, Compare comp) {
        if (first == end) {
            return true;
        }

        Iterator next = first;
        ++next;

        while (next != end) {
            if (comp(*next, *first)) {
                return false;
            }

            ++first;
            ++next;
        }

        return true;
    }
}

#endif
