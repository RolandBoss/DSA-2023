//
// Created by Roland on 2023. 05. 10..
//

#ifndef LAB7_FEL1_NODE_H
#define LAB7_FEL1_NODE_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node{
    char data;
    struct Node* next;
}Node;

Node *newNode(char new_data);
void insertAtEnd(Node** head_ref, char new_data);
bool isEmpty(Node *head);
void printList(Node* node);
int searchNode(Node* head_ref, char key);
int maganhangzokkozt(Node* head);
void deleteNode(Node** head_ref, char key);

#endif //LAB7_FEL1_NODE_H
