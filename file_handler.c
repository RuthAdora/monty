#include "monty.h"
/**
 * file_handler - A function to analize the file passed
 * @file: Parameter that recieves file passed
 * Return: 0
 */
int file_handler(char *filename)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *op;
	int line_number = 0;

	if (!filename)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		op = strtok(line, "\n\t\r ");
		line_number++;
		if (op)
			execute(op, line_number);

	}

	fclose(file);
	if (line)
		free(line);

	return (EXIT_SUCCESS);
}
