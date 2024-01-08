#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	int result = (*stack)->n + (*stack)->next->n;
	stack_t *temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->n = result;
}
