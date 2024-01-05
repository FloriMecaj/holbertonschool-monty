#include "monty.h"

/**
* push -pushes a new element into the stack
* @stack: -points to the head of the stack
* @line_number: holds value for the line number in monty file
*/

int number;
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode = malloc(sizeof(stack_t));

	if (newnode == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
    
	newnode->n = number;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*stack == NULL)
		*stack = newnode;
	else
	{
		newnode->next = *stack;
		(*stack)->prev = newnode;
		*stack = newnode;
	}
}
