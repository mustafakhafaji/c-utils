typedef struct _LinkedList LinkedList;

// Error codes:
//
// 0 - No error.
// 1 - Linked list is empty.
// 2 - Pointer error.
// 3 - Unknown.
#define LINKED_LIST_FAILURE 0
#define LINKED_LIST_SUCCESS 1

// Creates an empty linked list.
//
// @return Pointer to LinkedList
LinkedList* LinkedList_Init();

// Frees a linked list's memory.
//
// @param list LinkedList to free from memory.
void LinkedList_Free(LinkedList* list);

// Inserts an element to the beginning of a linked list.
void LinkedList_InsertAtBeginning(LinkedList* list, void* data);

// Inserts an element to the end of a linked list.
void LinkedList_InsertAtEnd(LinkedList* list, void* data);

// Returns and removes the first element in a linked list.
void* LinkedList_RemoveFromBeginning(LinkedList* list);

// Returns and removes the last element in a linked list.
void* LinkedList_RemoveFromEnd(LinkedList* list);

// Prints the contents of the given list (for debugging purposes).
//void LinkedList_Print(LinkedList* list);