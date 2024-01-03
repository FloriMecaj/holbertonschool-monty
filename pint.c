include"monty.h"
/**
* pint -prints the top value of the stack
* @stack: -points to the head of the stack
* @line_number: -holds value of the line in monty file
*/

void pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf(%d\n, (*stack)->n);
}
