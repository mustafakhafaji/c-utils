typedef struct Queue Queue;

#define QUEUE_EMPTY 1

// Returns an empty queue.
Queue* Queue_Create();

// Enqueues data.
void Queue_Enqueue(Queue* queue, void* data);

// Removes & returns the data of the first node.
void* Queue_Dequeue(Queue* queue);

// For debugging purposes.
void Queue_Print(Queue* queue);