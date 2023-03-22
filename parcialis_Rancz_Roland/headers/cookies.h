//
// Created by Roland on 2023. 03. 29..
//

#ifndef PARCIALIS_RANCZ_ROLAND_COOKIES_H
#define PARCIALIS_RANCZ_ROLAND_COOKIES_H

enum Type{EDES, SOS};

typedef struct{
    char name[25];
    int calories;
    int type;
}Cookies_t;

typedef struct{
    int capacity;
    int size;
    int *elements;
}CookiesArray;



char* getTypeDescription(enum Type type);
void readCookiesDetails(Cookies_t *pCookies);
void printCookiesDetails(Cookies_t cookies);
void createArray(int capacity, CookiesArray *pArray);
void printArray(CookiesArray array);
bool isFull(CookiesArray array);
bool isEmpty(CookiesArray array);
Cookies_t getItemAt(CookiesArray array, int position);
void insertFirst(CookiesArray *pArray, Cookies_t item);
void insertLast(CookiesArray *pArray, Cookies_t item);
int search(CookiesArray pArray, Cookies_t item);
bool update(CookiesArray *pArray, int position, Cookies_t newItem);
void deallocateArray(CookiesArray *pArray);

#endif //PARCIALIS_RANCZ_ROLAND_COOKIES_H
