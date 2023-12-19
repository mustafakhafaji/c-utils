#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


typedef struct LinkedList {
    Node* head;
    size_t length;
} LinkedList;


Node* createNode(int data, Node* next) {

    Node* node = malloc(2 * sizeof(Node));
    node->data = data;
    node->next = next;

    return node;
}


LinkedList* CreateList() {
    
    LinkedList* list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->length = 0;

    return list;
}


int InsertAtBeginningList(LinkedList* list, int data) {
    
    Node* node = createNode(data, list->head);

    list->length += 1;
    list->head = node;

    return 1;
}


int InsertAtEndList(LinkedList* list, int data) {

    Node* temp = list->head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    Node* newNode = createNode(data, NULL);
    newNode->data = data;

    temp->next = newNode;
    list->length += 1;

    return 1;
}


int DestroyList(LinkedList* list) {

    while (list->head != NULL) {

        Node* temp = list->head;

        list->head = list->head->next;

        free(temp);
    }

    return 1;
}


int PrintList(LinkedList* list) {

    Node* temp = list->head;

    int index = 0;

    while (temp != NULL) {
        printf("index: %i, data: %i\n", index, temp->data);
        temp = temp->next;
        index++;
    }

    return 1;
}