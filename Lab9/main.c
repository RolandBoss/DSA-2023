#include "Node.h"
#include <stdio.h>
int main()
{
    int szam,szj;
    Node *node = NULL;
    scanf("%i",&szam);
    while (szam > 0)
    {
        szj = szam % 10;
        insertAtEnd(&node,szj);
        szam /= 10;
    }
    printList(node);
}