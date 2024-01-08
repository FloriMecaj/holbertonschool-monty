#include "monty.h"

/**
 * push - pushes new node to the end of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of a line of the file
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arig = strtok(NULL, " \t\n");
	int i = 0;

	if (arig)
	{
		if (arig[0] == '-')
		{
			i = 1;
		}
		while (arig[i] != '\0')
		{
			if (!isdigit(arig[i]))
			{
				fprintf(stderr, "L%u: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
			i++;
		}
		int value = atoi(arig);

		stack_t *new_node = malloc(sizeof(stack_t));

		if (!new_node)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new_node->n = value;
		new_node->prev = NULL;
		new_node->next = *stack;
		if (*stack)
			(*stack)->prev = new_node;
		*stack = new_node;
	}
	else
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
