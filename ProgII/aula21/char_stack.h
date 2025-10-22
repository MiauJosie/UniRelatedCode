#pragma once
#include <stdbool.h>

typedef struct Stack Stack;

Stack *init_stack();

void free_stack(Stack *S);

bool is_empty(Stack *S);

char top(Stack *S);

void push(Stack *S, char x);

void pop(Stack *S);
