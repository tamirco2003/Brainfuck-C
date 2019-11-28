#ifndef STACK_H
#define STACK_H

typedef struct stack {
    unsigned int capacity;
    const char** arr;
    unsigned int endIndex;
} Stack;

Stack createStack(unsigned int capacity);

int isFull(Stack* stack);

int isEmpty(Stack* stack);

void push(Stack* stack, const char* element);

const char* peek(Stack* stack);

const char* pop(Stack* stack);

#endif