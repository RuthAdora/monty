#include "monty.h"
/**
 * main - Checks the code
 * @argv: 
 * @argc:
 * Return: 0
 */
int main(int argc, char *argv[])
{
        if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s <filename>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	file_handler(argv[1]);
  return (0);
}
