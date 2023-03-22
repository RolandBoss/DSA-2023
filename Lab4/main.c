#include <stdio.h>
#include "array.h"

int main() {
    CharArray array;
    createCharArray(10,&array);
    printArray(array);
    return 0;
}
