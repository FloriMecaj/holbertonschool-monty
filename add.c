include"monty.h"

/**
 * add -adds the top 2 values of the stack
 * @stack: -points to the head of the stack
 * @line_number: -holds the value of the line
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int sum;
	int nr_nodes = 0;

	if (*stack == NULL)
	{
		fprintf(stderr, "L<%d\n>: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;

	while (tmp != NULL)
	{
		nr_nodes++;
		tmp = tmp->next;
	}
	if (nr_nodes < 2)
	{
		fprintf(stderr, "L<%d\n>: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = sum;
	*stack = (*stack->next);
	free(tmp);
}
