//
// Created by Roland on 2023. 05. 17..
//

#ifndef BIN_FAK_BINTREE_H
#define BIN_FAK_BINTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Lanyok{
    char name[20];
    int age;
}Lanyok;

typedef struct Node {
    Lanyok info[20];
    struct Node *left, *right;
}Node;

//create a new node
Node *createNewNode(Lanyok lanyok);
//insert on the left of the node
Node *insertLeft(Node *root,Lanyok lanyok);
//insert on the right of the node
Node *insertRight(Node *root,Lanyok lanyok);
//preorder traversal
void preorderTraversal(Node *root);
//inorder traversal
void inorderTraversal(Node *root);
//postorder traversal
void postorderTraversal(Node *root);

#endif //BIN_FAK_BINTREE_H
