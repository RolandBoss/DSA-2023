//
// Created by Roland on 2023. 05. 10..
//

#include "../headers/node.h"

Node *newNode(char new_data) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (!new_node) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }
// insert the data
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

void insertAtEnd(Node **head_ref, char new_data) {
    Node *new_node = newNode(new_data);
    Node *last = *head_ref;
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

void printList(Node *node) {
    while (node != NULL) {
        printf("%4c ", node->data);
        node = node->next;
    }
}

int searchNode(Node *head_ref, char key) {
    Node *current = head_ref;
    int db = 0;
    while (current != NULL) {
        if (current->data == key)
            ++db;
        current = current->next;
    }
    return db;
}

int maganhangzokkozt(Node* head){
    int db = 0;
    Node *prev = head;
    Node *current = head->next;
    while(current->next != NULL){
        if(strchr("AEUIOaeuio",prev->data) && strchr("AEUIOaeuio", current->next->data)){
            ++db;
        }
        current = current->next;
        prev = prev->next;
    }
    return db;
}

void deleteNode(Node** head_ref, char key) {
    Node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
// Find the key to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
// If the key is not present
    if (temp == NULL) return;
// Remove the node
    prev->next = temp->next;
    free(temp);
}

