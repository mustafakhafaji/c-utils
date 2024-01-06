typedef struct _Stack Stack;

// Error codes:
//
// 0 - No error.
// 1 - Stack is empty.
// 2 - Pointer error.
// 3 - Unknown.

// Allocates memory for an empty stack; initalizes stack.
//
// @return Pointer to an empty stack.
Stack* Stack_Init();

// Adds pointer to the top of the stack.
//
// @param stack The stack to add data to.
// @param data Memory address of data to add to stack.
void Stack_Push(Stack* stack, void* data);

// Returns and removes the top memory address in the given stack.
//
// @param stack The stack to pop from.
void* Stack_Pop(Stack* stack);

// Returns the memory address at the top of the stack.
//
// @param stack The stack to peek.
void* Stack_Peek(Stack* stack);

// Prints the contents of the given stack. For debugging purposes.
//
// @param stack The stack to print.
//void Stack_Print(Stack* stack);
