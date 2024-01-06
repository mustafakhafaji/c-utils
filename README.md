# c-utils

A collection of various utility functions and data structures implemented in C.

Whether you're looking for efficient data structures, or useful functions to simplify your C/C++ projects, you may find something valuable here.

## Contents
* Data Structures
    - Linked List
    - Queue
    - Stack
    - Binary Search Tree [wip]
    - Splay Tree [wip]
    - Heap [wip]
    - Hashtable [wip]
* Math
    - Vector(2, 3, 4)
    - 4x4 Matrix

## Data Structures

Usage example:
```c
#include "Stack/stack.h"

int main(void) {
    Stack* stack = Stack_Init();

    int value = 5;
    Stack_Push(stack, &value);
}
```