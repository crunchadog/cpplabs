#include <iostream>
#include "header.h"

int main() {
    double v1_1 = 13;
    double v1_2 = 5;
    double r = 60;
    double decrease = 20;
    int matrix[3][3] =
            {
                    {1,2,3},
                    {6,7,8},
                    {8,9,5},
            };
    transposeMatrixPointer(matrix);
//    transposeMatrixLink(matrix);
}