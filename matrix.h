#ifndef MATRIX_H
#define MATRIX_H
#include <stdio.h>
#include <stdlib.h>

typedef struct DoubleMatrix
{
    double ** M;
    int n;
    int m;
}DoubleMatrix;




DoubleMatrix hstack(DoubleMatrix M1, DoubleMatrix M2);
DoubleMatrix matrixMultiplication(DoubleMatrix M , DoubleMatrix N);
DoubleMatrix createMatrix(int n, int m);
DoubleMatrix transpose(DoubleMatrix M);
DoubleMatrix reducedEchelonForm(DoubleMatrix M,double eps);
DoubleMatrix copyMatrix(DoubleMatrix M);
DoubleMatrix solve(DoubleMatrix M, DoubleMatrix b,double eps,int *code);
void printMatrix(DoubleMatrix M);
void exchangeRow(DoubleMatrix * M,int i, int j);
void freeMatrix(DoubleMatrix * M);



#endif