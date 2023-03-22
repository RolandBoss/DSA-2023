//
// Created by Roland on 2023. 03. 16..
//

#ifndef LAB4_ARRAY_H
#define LAB4_ARRAY_H

#include <stdbool.h>

typedef struct{
    int capacity;
    int size;
    int *elements;
}CharArray;

void createCharArray(int capacity, CharArray* pArray);
/**
* Prints all items in the array
* @param array
*/

void prCharArray(CharArray array);
/**
* Check whether the array is full or not
* @param array
* @return true/false
*/
bool isFull(CharArray array);
/**
* Check whether the array is empty or not
* @param array
* @return true/false
*/
bool isEmpty(CharArray array);
/**
* Returns an item at a given position if the position is correct
* @param array
* @param position
* @return item at position/INT_MIN
*/
int getItemAt(CharArray array, int position);
/**
* Inserts an item at the beginning of the array
* @param pArray
* @param item
*/
void insertFirst(CharArray* pArray, int item);
/**
* Inserts an item at the end of the array
* @param pArray
* @param item
*/
void insertLast(CharArray* pArray, int item);
/**
* Inserts an item at at a given position if the position is correct
* @param pArray
* @param item
*/
void insertAt(CharArray* pArray, int position, int item);
/**
* Deletes an item at a given position if the position is correct
* @param pArray
* @param position
*/
void deleteItemAt(CharArray* pArray, int position);
/**
* Searches for an item in the array
* @param pArray
* @param item
* @return position/-1
*/
int search(CharArray pArray, int item);

/**
* Updates an item at a given position with a new item if the position is
correct
* @param pArray
* @param position
* @param newItem
* @return true if update is successful, otherwise false
*/
bool update(CharArray* pArray, int position, int newItem);
/**
* Deallocates memory for array
* @param pArray
*/
void deallocateCharArray(CharArray *pArray);

#endif //LAB4_ARRAY_H
