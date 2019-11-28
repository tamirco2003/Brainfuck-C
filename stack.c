#include "stack.h"
#include <stdlib.h>

Stack createStack(unsigned int capacity) {
    Stack stack;
    stack.capacity = capacity;
    stack.arr = malloc(capacity * sizeof(char*));
    stack.endIndex = 0;

    return stack;
}

int isFull(Stack* stack) {
    return stack->endIndex >= stack-> capacity;
}

int isEmpty(Stack* stack) {
    return stack->endIndex == 0;
}

void push(Stack* stack, const char* element) {
    if (isFull(stack)) {
        return;
    }

    stack->arr[stack->endIndex++] = element;
}

const char* peek(Stack* stack) {
    if (isEmpty(stack)) {
        return NULL;
    }

    return stack->arr[stack->endIndex - 1];
}

const char* pop(Stack* stack) {
    if (isEmpty(stack)) {
        return NULL;
    }

    stack->endIndex--;
    const char* element = stack->arr[stack->endIndex];
    stack->arr[stack->endIndex] = NULL;
    return element;
}