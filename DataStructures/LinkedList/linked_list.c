#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

typedef struct _Node {
    void* data;
    struct _Node* next;
} Node;


typedef struct _LinkedList {
    Node* head;
    size_t length;
    unsigned int error;
} LinkedList;


static Node* CreateNode(void* data, Node* next) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = next;
    return node;
}


LinkedList* LinkedList_Init() {
    LinkedList* list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->length = 0;
    list->error = 0;
    return list;
}


void LinkedList_Free(LinkedList* list) {
    while (list->head != NULL) {
        Node* temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
}


void LinkedList_InsertAtBeginning(LinkedList* list, void* data) {
    Node* node = CreateNode(data, list->head);
    if (node == NULL) {
        list->error = 2;
        return;
    }

    list->length++;
    list->head = node;
    list->error = 0;
}


void LinkedList_InsertAtEnd(LinkedList* list, void* data) {
    Node* last_node = list->head;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    
    Node* newNode = CreateNode(data, NULL);

    last_node->next = newNode;
    list->length++;
    list->error = 0;
}


void* LinkedList_RemoveFromBeginning(LinkedList* list) {
    if (list->head == NULL) {
        list->error = 1;
        return;
    }

    Node* temporary = list->head;
    void* data = temporary->data;
    
    list->head = list->head->next;
    free(temporary);

    list->error = 0;
    return data;
}


void* LinkedList_RemoveFromEnd(LinkedList* list) {
    Node* last_node = list->head;
    Node* new_last_node = NULL;

    while (last_node->next != NULL) {
        new_last_node = last_node;
        last_node = last_node->next;
    }

    new_last_node->next = NULL;
    void* data = last_node->data;

    free(last_node);

    list->error = 0;
    return data;
}

/*
void LinkedList_Print(LinkedList* list) {
    Node* temp = list->head;
    int index = 0;

    while (temp != NULL) {
        printf("index: %i, data: %i\n", index, *(int*)temp->data);
        temp = temp->next;
        index++;
    }
}
*/