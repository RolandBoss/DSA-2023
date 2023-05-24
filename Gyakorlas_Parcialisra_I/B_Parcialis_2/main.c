#include <stdio.h>
#include "fel_2.h"

int main() {
    Node *head1 = NULL;
    char nev[20];
    freopen("nevek.txt", "r", stdin);
    for (int i = 0; i < 7; ++i) {
        scanf("%[^\n]\n", nev);
        if(i<3){
            insertAtBeginning(&head1, nev);
        }
        if(i>2){
            insertAtEnd(&head1, nev);
        }
    }
    printList(head1);
    return 0;
}
