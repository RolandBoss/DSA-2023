//
// Created by Roland on 2023. 05. 03..
//

#ifndef LAB10_QUEUE_H
#define LAB10_QUEUE_H

typedef struct {
    int capacity;
    int front;
    int rear;
    char *elements;
}Queue;

void createQueue(int capacity, Queue *queue);
bool isFull(Queue queue);
bool isEmpty(Queue queue);
void enqueue(Queue* queue, char item);
void display(Queue queue);

#endif //LAB10_QUEUE_H
