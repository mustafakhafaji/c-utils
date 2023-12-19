typedef struct LinkedList LinkedList;

LinkedList* CreateList();
int InsertAtBeginningList(LinkedList* list, int data);
int InsertAtEndList(LinkedList* list, int data);
int DestroyList(LinkedList* list);
int PrintList(LinkedList* list);