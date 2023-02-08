#ifndef CPPLION_HEADER_H
#define CPPLION_HEADER_H

void changeHighestNumberLink(int &a, int &b);
void changeHighestNumberPointer(int *a, int *b);

void roundNumberLink(double &number);
void roundNumberPointer(double *number);

void changeCircleRadiusLink(double &r, double &d);
void changeCircleRadiusPointer(double *r, double *d);

void transposeMatrixLink(int(&matrix)[3][3]);
void transposeMatrixPointer(int (*matrix)[3]);


#endif