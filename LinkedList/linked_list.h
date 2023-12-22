typedef struct _LinkedList LinkedList;

#define LINKED_LIST_FAILURE 0
#define LINKED_LIST_SUCCESS 1

// Creates and returns an empty linked list pointer.
LinkedList* LinkedList_Init();

// Frees a Linked List's memory.
void LinkedList_Free(LinkedList* list);

// Inserts an element to the beginning of a linked list.
int LinkedList_InsertAtBeginning(LinkedList* list, void* data);

// Inserts an element to the end of a linked list.
void LinkedList_InsertAtEnd(LinkedList* list, void* data);

// Returns and removes the first element in a linked list.
void* LinkedList_RemoveFromBeginning(LinkedList* list);

// Returns and removes the last element in a linked list.
void* LinkedList_RemoveFromEnd(LinkedList* list);

// Prints the contents of the given list (for debugging purposes).
//void LinkedList_Print(LinkedList* list);