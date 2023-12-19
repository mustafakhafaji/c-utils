#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


typedef struct Stack {
    Node* head;
} Stack;


Stack* CreateStack() {

    Stack* stack = malloc(sizeof(Stack));
    stack->head = NULL;

    return stack;
}


int PushStack(Stack* stack, int data) {

    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = stack->head;

    stack->head = newNode;

    return 1;
}


int PopStack(Stack* stack) {

    if (stack->head == NULL) {
        return 0;
    }

    Node* temp = stack->head;

    stack->head = stack->head->next;

    free(temp);

    return 1;
}


int PeekStack(Stack* stack) {

    if (stack->head != NULL) {

        int data = stack->head->data;

        printf("%i\n", data);
        return data;
    }
    else {
        printf("NULL");
        return 0;
    }
}


int PrintStack(Stack* stack) {

    Node* temp = stack->head;
    int index = 0;

    while (temp != NULL) {
        printf("index: %i, data: %i\n", index, temp->data);
        temp = temp->next;
        index++;
    }

    return 1;
}