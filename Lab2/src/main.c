#include "functions_matrix.h"

int main() {
    int **matrix, n, m;
    readMatrix(&n, &m, &matrix, "be.txt");
    printMatrix(n, m, matrix, "CON");
    deallocateMemoryForMatrix(n, &matrix);
    return 0;
}
