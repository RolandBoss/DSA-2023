#include <stdio.h>
#include "Queue.h"
#include <string.h>
#include <ctype.h>

int main() {
    Queue queue;
    char x[] = "FNPA2C";
    createQueue(strlen(x), *queue);
    for (int i = 0; i < strlen(x) - 1; ++i) {
        if(isalpha(x[i])){
            enqueue(*queue, x[i]);
        }
    }
    return 0;
}
