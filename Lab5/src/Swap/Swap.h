#ifndef LAB5_SWAP_H
#define LAB5_SWAP_H


template<typename T>
void swap(T &a, T &b) {
    T temp = b;
    a = b;
    b = temp;
}

#endif //LAB5_SWAP_H
