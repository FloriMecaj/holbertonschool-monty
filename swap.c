#include "monty.h"

/**
 * swap -swaps the most recent 2 nodes values
 * @stack: -points to the head of the stack
 * @line_number: -holds the value of the respective line
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int nr_nodes = 0;
	int n;
	stack_t *tmp;

	if (*stack == NULL)
		return;

	tmp = *stack;

	while(tmp != NULL)
	{
		nr_nodes++;
		tmp = tmp->next;
	}
	if (nr_nodes < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = n;

}
