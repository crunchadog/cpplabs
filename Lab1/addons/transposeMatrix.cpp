#include "iostream"
#include "../header.h"

void transposeMatrixPointer(int (*matrix)[3]) {
    int temp;

    for (int i = 0; i < 3; ++i) {
        for (int j = i; j < 3; ++j) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << '\n';
    }
}

void transposeMatrixLink(int(&matrix)[3][3]) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << '\n';
    }
}