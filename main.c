#include "monty.h"
#define MAX_SIZE 100
int number;

int main(int argc, char **argv)
{
	void (*p_func)(stack_t **, unsigned int);
	char buffer[MAX_SIZE];
	unsigned int line_number = 1;
	stack_t *top = NULL;
	char *token, command[1024];
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	while(fgets(buffer, MAX_SIZE, file) != NULL)
	{
		token = strtok(buffer, " ");
		if (token == "\0")
			continue;
		strcpy(command, token);
		if (is_comment(token,line_number) == 1)
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " ");
			if (token == NULL || is_number(token) == -1)
				not_int_err(line_number);
			number = atoi(token);
			p_func = getfunction(command);
			p_func(&top, line_number);
		}
		else
		{
			p_func = getfunction(token);
			p_func(&top, line_number);
		}
		line_number++;

	}
	fclose(file);
	freestack(top);
	return (0);
}
