#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
    stack_t *newnode = malloc(sizeof(stack_t));

    if (newnode == NULL)
        printf("Error: malloc failed\n");
    
    newnode->n = line_number;
    newnode->next = NULL;
    newnode->prev = NULL;
    stack_t *tmp = NULL;

    if (*stack == NULL)
        *stack = newnode;
    
    tmp = *stack;
    newnode->next = tmp;
    tmp->prev = newnode;
    *stack = newnode;
}