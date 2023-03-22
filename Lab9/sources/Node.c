#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include "constants.h"

Node *newNode(int new_data)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (!new_node) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
// insert the data
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}
bool isEmpty(Node *head) {
    return head == NULL;
}

void insertAtEnd(Node** head_ref, int
new_data) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

void printList(Node* node)
{
    while (node != NULL) {
        printf("%4d ", node->data);
        node = node->next;
    }
}