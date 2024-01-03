#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *virtual = *stack;

    if (*stack == NULL)
        return;
        
    while(virtual != NULL)
    {
        printf("%d", virtual->n);
        virtual = virtual->next;
    }
}