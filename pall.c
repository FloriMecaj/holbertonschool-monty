#include"monty.h"

/**
 * pall - prints all values from the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of a line of the file
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
