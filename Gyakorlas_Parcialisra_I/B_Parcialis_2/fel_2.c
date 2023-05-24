//
// Created by Roland on 2023. 05. 24..
//

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "fel_2.h"

Node *newNode(char new_data[]) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (!new_node) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }
// insert the data
    strcpy(new_node->info.name, new_data);
    new_node->info.size = strlen(new_data);
    new_node->next = NULL;
    return new_node;
}

void insertAtBeginning(Node** head_ref, char new_data[]) {
// Allocate memory to a node
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
// Move head to new node
    (*head_ref) = new_node;
}

void insertAtEnd(Node** head_ref,char new_data[]) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

bool isEmpty(Node *head) {
    return head == NULL;
}

void printList(Node* node) {
    while (node != NULL) {
        printf("%s , %i \n", node->info.name, node->info.size);
        node = node->next;
    }
}
