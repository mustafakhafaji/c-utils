typedef struct Stack Stack;

Stack* CreateStack();
int PushStack(Stack* stack, int data);
int PopStack(Stack* stack);
int PeekStack(Stack* stack);
int PrintStack(Stack* stack);