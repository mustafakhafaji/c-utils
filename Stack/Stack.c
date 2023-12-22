// Implementation of a generic stack (last in, first out [LIFO]).
//
// Mustafa Al-Khafaji.

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct _Node {
    void* data;
    struct _Node* next;
} Node;


typedef struct _Stack {
    Node* head;
} Stack;


Stack* Stack_Init() {
    Stack* stack = malloc(sizeof(Stack));
    stack->head = NULL;

    return stack;
}


void Stack_Push(Stack* stack, void* data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = stack->head;

    stack->head = newNode;
}


void* Stack_Pop(Stack* stack) {
    if (stack->head == NULL) {
        return 0;
    }

    Node* temp = stack->head;
    stack->head = temp->next;

    void* data = temp->data;

    free(temp);

    return data;
}


void* Stack_Peek(Stack* stack) {
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