#include "iostream"
#include "header.h"

void changeHighestNumberLink(int &a, int &b) {
    int result;
    if (&a > &b) {
        result = a % b;
        a = result;
    } else {
        result = b % a;
        b = result;
    }

}

void changeHighestNumberPointer(int *a, int *b) {
    int result;
    if (*a > *b) {
        result = *a % *b;
        *a = result;
    } else {
        result = *b % *a;
        *b = result;
    }
}