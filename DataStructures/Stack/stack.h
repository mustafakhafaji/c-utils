typedef struct _Stack Stack;

#define STACK_FAILURE 0
#define STACK_SUCCESS 1

// Allocates memory and returns a stack pointer.
Stack* Stack_Init();

// Adds pointer to the top of the stack.
void Stack_Push(Stack* stack, void* data);

// Returns and removes the top element in the given stack.
void* Stack_Pop(Stack* stack);

// Returns pointer to the top element in the given stack.
void* Stack_Peek(Stack* stack);

// Prints the contents of the given stack (for debugging purposes).
//void Stack_Print(Stack* stack);
