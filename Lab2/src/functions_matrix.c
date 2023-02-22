//
// Created by Roland on 2023. 02. 22..
//

#include "../headers/functions_matrix.h"

int **allocateMemoryForMatrix1(int rows, int cols) {
    int **pMatrix;
    pMatrix = (int **) malloc(rows * sizeof(int *));
    if (!pMatrix) {
        printf(MEMORY_ALLOCATOIN_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATOIN_ERROR_CODE);
    }
    for (int i = 0; i < rows; ++i) {
        pMatrix[i] = (int *) malloc(cols * sizeof(int));
    }
    return pMatrix;
}

void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix) {
    *dpMatrix = (int **) malloc(rows * sizeof(int *));
    if (!*dpMatrix) {
        printf(MEMORY_ALLOCATOIN_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATOIN_ERROR_CODE);
    }
    for (int i = 0; i < rows; ++i) {
        *dpMatrix[i] = (int *) malloc(cols * sizeof(int));
    }
}

void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input) {
    freopen(input, "r", stdin);
    if (!freopen(input, "r", stdin)) {
        printf(FILE_OPEN_ERROR_MESSAGE);
        exit(FILE_OPEN_ERROR_CODE);
    }
    scanf("%i%i", pRows, pCols);
    (*dpArray) = allocateMemoryForMatrix1(*pRows, *pCols);
    //allocateMemoryForMatrix2(*pRows, *pCols, &(*dpArray));
    for (int i = 0; i < *pRows; ++i) {
        for (int j = 0; j < *pCols; ++j) {
            scanf("%i", &(*dpArray)[i][j]);
        }
    }
    freopen("CON", "r", stdin);
}

void printMatrix(int rows, int cols, int **pMatrix, const char *output) {
    freopen(output, "w", stdout);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%i ", (pMatrix)[i][j]);
        }
        printf("\n");
    }
    freopen("CON", "w", stdout);
}

void deallocateMemoryForMatrix(int rows, int ***dpMatrix) {
    for (int i = 0; i < rows; ++i) {
        free((*dpMatrix)[i]);
        (*dpMatrix)[i] = NULL;
    }
    free(*dpMatrix);
    *dpMatrix = NULL;
}

