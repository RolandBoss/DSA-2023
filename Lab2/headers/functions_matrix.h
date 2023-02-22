//
// Created by Roland on 2023. 02. 22..
//

#ifndef LAB2_FUNCTIONS_MATRIX_H
#define LAB2_FUNCTIONS_MATRIX_H
#include <stdlib.h>
#include <stdio.h>
#include "constants.h"
int** allocateMemoryForMatrix1(int rows, int cols);
void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix);
void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);
void printMatrix(int rows, int cols, int **pMatrix, const char *output);
void deallocateMemoryForMatrix(int rows, int ***dpMatrix);

#endif //LAB2_FUNCTIONS_MATRIX_H
