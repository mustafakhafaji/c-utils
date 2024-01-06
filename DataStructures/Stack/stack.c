#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct _Node {
    struct _Node* next;
    void* data;
} Node;


typedef struct _Stack {
    Node* head;
    unsigned int error;
} Stack;


Stack* Stack_Init() {
    Stack* stack = malloc(sizeof(Stack));
    stack->head = NULL;
    stack->error = 0;
    return stack;
}


void Stack_Push(Stack* stack, void* data) {
    Node* newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        stack->error = 2;
    }

    newNode->data = data;
    newNode->next = stack->head;

    stack->head = newNode;
    stack->error = 0;
}


void* Stack_Pop(Stack* stack) {
    if (stack->head == NULL) {
        stack->error = 1;
        return;
    }

    Node* temp = stack->head;
    stack->head = temp->next;
    stack->error = 0;

    void* data = temp->data;

    free(temp);

    return data;
}


void* Stack_Peek(Stack* stack) {
    if (stack->head == NULL) {
        stack->error = 1;
        return;
    }

    stack->error = 0;
    return stack->head->data;
}


/*
void Stack_Print(Stack* stack) {

    Node* temp = stack->head;
    int index = 0;

    while (temp != NULL) {
        printf("index: %i, data: %i\n", index, *(int*)temp->data);
        temp = temp->next;
        index++;
    }
}
*/