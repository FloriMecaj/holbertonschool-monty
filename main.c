#include"monty.h"


int main()
{
	stack_t *top = NULL;

	push(&top, 0);
	push(&top, 0);
	add(&top, 0);
	pint(&top, 0);
	pop(&top, 0);
	pall(&top, 0);

	return 0;
}
