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

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{

	}

	fclose(file);
	if (line)
		free(line);

	return (EXIT_SUCCESS);
}
