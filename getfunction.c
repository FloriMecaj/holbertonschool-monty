#include "monty.h"

/**
*getfunction - function that returns a pointer to respective function
*@line_number: -holds the value for the line number
*Return: (structures[i].f)
*/

void (*getfunction(char *opcode)) (stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t structures[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{NULL, NULL}
	};
	while (structures[i].opcode)
	{
		if (strcmp(structures[i].opcode, opcode) == 0)
			return (structures[i].f);

		i++;
	}
	return (NULL);
}
