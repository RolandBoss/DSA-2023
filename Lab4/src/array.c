//
// Created by Roland on 2023. 03. 16..
//

#include <malloc.h>
#include <stdio.h>
#include "array.h"
#include "constans.h"


void createCharArray(int capacity, CharArray *pArray) {
    pArray->capacity = capacity;
    pArray->size = 0;
    pArray->elements = (int*)malloc(pArray->capacity * sizeof(int));
    if(!pArray->elements){
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
}

void prCharArray(CharArray array) {
    if(isEmpty(array)){
        printf(EMPTY_MESSAGE);
        return;
    }
    printf("Elements of the array: ");
    for (int i = 0; i < array.size; ++i) {
        printf("%i ", array.elements[i]);
    }
}

bool isFull(CharArray array) {
    return array.size == array.capacity;
}

bool isEmpty(CharArray array) {
    return array.size == 0;
}




