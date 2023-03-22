//
// Created by Roland on 2023. 03. 29..
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../headers/cookies.h"

void readCookiesDetails(Cookies_t *pCookies) {
    scanf("\n%[^\n]", pCookies->name);
    scanf("\n%i ", &pCookies->calories);
    scanf("\n%i", &pCookies->type);
}

void printCookiesDetails(Cookies_t cookies) {
    printf("\nName of the cookie: %s", cookies.name);
    printf("\nCalories of the cookie: %i", cookies.calories);
    printf("\nType of the cookie: %s", getTypeDescription(cookies.type));
}

char *getTypeDescription(enum Type type) {
    switch (type) {
        case 1: return "EDES";
        case 2: return "SOS";
        default: return "Erorr";
    }
}

void createArray(int capacity, CookiesArray *pArray) {
    pArray -> capacity = capacity;
    pArray -> size = 0;
    pArray -> elements = (int*)calloc(capacity, sizeof(int));
    if(!pArray->elements){
        printf("MEMORY ALLOCATION ERROR");
        exit(-1);
    }
}

void printArray(CookiesArray array) {
    if(isEmpty(array)){
        printf("ARRAY EMPTY");
        return;
    }
    printf("Elements of the array: ");
    for (int i = 0; i < array.size; ++i) {
        printf("%i ", array.elements[i]);
    }
    printf("\n");
}

bool isFull(CookiesArray array) {
    return array.size == array.capacity;
}

bool isEmpty(CookiesArray array) {
    return array.size == 0;
}
void insertFirst(CookiesArray *pArray, Cookies_t item) {
    if(isFull(*pArray)){
        printf("FULL\n");
        return;
    }
    for (int i=pArray->size; i>=0 ;i--){
        pArray-> elements[i+1]= pArray-> elements[i];
    }
    pArray->elements[0] = &item;
    pArray->size++;
}

void insertLast(CookiesArray *pArray, Cookies_t item) {
    if (isFull(*pArray)) {
        printf("FULL\n");
        return;
        pArray->elements[pArray->size++] = &item;
    }
}
