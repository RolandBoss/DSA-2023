//
// Created by Roland on 2023. 05. 24..
//

#ifndef PARCIALIS_B_1_FEL1_H
#define PARCIALIS_B_1_FEL1_H

typedef struct Node {
    char name[20];
    struct Node *left, *right;
}Node;

Node *createNewNode(char newData[]);
Node *insertLeft(Node *root, char newData[]);
Node *insertRight(Node *root, char newData[]);
void postorderTraversal(Node *root);

#endif //PARCIALIS_B_1_FEL1_H
