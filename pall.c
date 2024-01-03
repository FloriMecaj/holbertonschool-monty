#include "monty.h"

/**
* pall -prints all the values of the stack
* @stack: -points to the head of the stack
* @line_number: holds value for the line number in monty file
*/

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *virtual = *stack;
    (void) line_number;

    if (*stack == NULL)
        return;
 
    while(virtual != NULL)
    {
        printf("%d", virtual->n);
        virtual = virtual->next;
    }
}
