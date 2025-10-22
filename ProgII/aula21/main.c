#include "char_stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Stack *stack = init_stack();
    Stack *stack_aux = init_stack();

    push(stack, 'w');
    push(stack, 'i');
    push(stack, 'l');
    push(stack, 'l');
    push(stack, 'i');
    push(stack, 'e');

    while (!is_empty(stack))
    {
        char c = top(stack);
        push(stack_aux, c);
        pop(stack);
    }

    char x = top(stack_aux);
    pop(stack_aux);

    while (!is_empty(stack_aux))
    {
        char c = top(stack_aux);
        push(stack, c);
        pop(stack_aux);
    }

    push(stack, x);

    while (!is_empty(stack))
    {
        printf("%c\n", top(stack));
        pop(stack);
    }
}