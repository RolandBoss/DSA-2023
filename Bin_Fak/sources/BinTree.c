//
// Created by Roland on 2023. 05. 17..
//

#include "../headers/BinTree.h"

Node *createNewNode(Lanyok lanyok) {
    Node *newNode = malloc(sizeof(Node));
    if (!newNode) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }
    strcpy(newNode->info->name, lanyok.name);
    newNode->info->age = lanyok.age;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *insertLeft(Node *root, Lanyok lanyok) {
    root->left= createNewNode(lanyok);
    return root->left;
}

Node *insertRight(Node *root, Lanyok lanyok) {
    root->right= createNewNode(lanyok);
    return root->right;
}

void preorderTraversal(Node *root) {
    if(root==NULL) return;
    printf("%s %i ",root->info->name, root->info->age);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node *root) {
    if(root==NULL) return;
    inorderTraversal(root->left);
    printf("%s %i ",root->info->name, root->info->age);
    inorderTraversal(root->right);
}

void postorderTraversal(Node *root) {
    if(root==NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%s %i ",root->info->name, root->info->age);
}