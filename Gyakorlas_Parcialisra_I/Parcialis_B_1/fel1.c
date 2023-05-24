//
// Created by Roland on 2023. 05. 24..
//

#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include "fel1.h"

Node *createNewNode(char newData[]) {
    Node *newNode = malloc(sizeof(Node));
    if (!newNode) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }
    strcpy(newNode->name, newData);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *insertLeft(Node *root, char newData[]) {
    root->left= createNewNode(newData);
    return root->left;
}

Node *insertRight(Node *root, char newData[]) {
    root->right= createNewNode(newData);
    return root->right;
}

void postorderTraversal(Node *root) {
    if(root==NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%s ",root->name);
}
