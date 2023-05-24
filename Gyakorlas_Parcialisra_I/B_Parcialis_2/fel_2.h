//
// Created by Roland on 2023. 05. 24..
//

#ifndef B_PARCIALIS_2_FEL_2_H
#define B_PARCIALIS_2_FEL_2_H
#include <stdbool.h>

typedef struct Torpe{
    char name[20];
    int size;
}Torpe;

typedef struct Node{
    Torpe info;
    struct Node* next;
}Node;

Node *newNode(char new_data[]);
void insertAtBeginning(Node** head_ref, char new_data[]);
void insertAtEnd(Node** head_ref, char new_data[]);
bool isEmpty(Node *head);
void printList(Node* node);

#endif //B_PARCIALIS_2_FEL_2_H
