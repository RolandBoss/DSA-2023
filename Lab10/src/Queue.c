//
// Created by Roland on 2023. 05. 03..
//

#include "Queue.h"
#include <malloc.h>
#include <stdio.h>

void createQueue(int capacity, Queue *queue) {
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->elements = (char *) calloc(queue->capacity,
                                     sizeof(char ));
    if (!queue->elements){
        printf("Error");
}
}

bool isFull(Queue queue) {
    return queue.rear == queue.capacity - 1;
}

void enqueue(Queue *queue, char item) {
    if (isFull(*queue)) {
        printf("Full");
        return;
    }
    if (isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->elements[++queue->rear]=item;
}

void display(Queue queue) {
    if (isEmpty(queue)) {
        printf("The queue is ");
        return;
    }
    for (int i = queue.front; i <= queue.rear; ++i) {
        printf("%i\n"
                , queue.elements[i]);
    }
}



