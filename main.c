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
		fprintf("USAGE: monty file");
		return (EXIT_FAILURE);
	}

	file_handler(argv[1]);
  return (0);
}
