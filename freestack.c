#include "monty.h"

/**
 * free_stack - frees a stack_t stack.
 * @stack: pointer to the head of a stack_t stack.
 * Return: void
 */

void free_stack(stack_t **stack)
{
	while (*stack)
	{
		stack_t *temp = (*stack)->next;

		free(*stack);
		*stack = temp;
	}
}
