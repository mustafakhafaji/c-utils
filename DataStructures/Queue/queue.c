// Queue (FIFO [first in, first out]) implementation.
//
// Mustafa Al-Khafaji

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

typedef struct Node {
    void* data;
    struct Node* next;
} Node;


typedef struct Queue {
    Node* head;
    Node* tail;
    size_t length;
    int error;
} Queue;


Queue* Queue_Create() {
    Queue* queue = malloc(sizeof(Queue));
    queue->head = NULL;
    queue->tail = NULL;
    queue->length = 0;
    queue->error = 0;
    return queue;
}


void Queue_Enqueue(Queue* queue, void* data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    
    if (queue->length == 0) {
        queue->head = node;
    }
    else {
        queue->tail->next = node;
    }

    queue->tail = node;
    queue->length++;
}


void* Queue_Dequeue(Queue* queue) {
    if (queue->length == 0) {
        queue->error = QUEUE_EMPTY;
    }

    Node* temp = queue->head;
    void* data = temp->data;

    queue->head = queue->head->next;

    free(temp);
    queue->length--;

    return data;
}

/*
void Queue_Print(Queue* queue) {
    Node* temp = queue->head;
    
    while (temp != NULL) {
        printf("%i\n", *(int*) temp->data);
        temp = temp->next;
    }
}
*/