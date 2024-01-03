include"monty.h"

/**
 * pop -pops away the top node
 * @stack: -points to the head of the stack
 * @line_number: -holds value of the line
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
