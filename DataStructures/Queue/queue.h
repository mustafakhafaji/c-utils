typedef struct Queue Queue;

// Error codes:
//
// 0 - No error.
// 1 - Queue is empty.
// 2 - Pointer error.
// 3 - Unknown.

// Returns pointer to an empty queue; initalizes a new queue.
//
// @return Pointer to queue.
Queue* Queue_Create();

// Enqueues memory address to given queue.
//
// @param queue The queue.
// @param data The memory address to enqueue.
void Queue_Enqueue(Queue* queue, void* data);

// Removes & returns the memory address of the last added node.
//
// @param queue The queue.
// @return Memory address of item in queue.
void* Queue_Dequeue(Queue* queue);

// Prints the queue's contents. For debugging purposes.
//
// @param queue The queue.
//void Queue_Print(Queue* queue);