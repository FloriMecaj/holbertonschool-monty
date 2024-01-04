#include "monty.h"
#define MAX_SIZE 100

int main(int argc, char **argv)
{
	FILE *file;
	char buffer[MAX_SIZE];
	char *opcode;
	char *number;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\nError: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
		printf("error");
	while(fgets(buffer, MAX_SIZE, file))
	{
		opcode = strtok(buffer, " ");
		number = strtok(NULL, " ");
	}
	
	return 0;
}
