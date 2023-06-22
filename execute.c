#include "monty.h"
/**
 * execute - 
 * @op:
 * @line_number:
 * Return: No return
 */
void execute(char *opcd, unsigned int line_number)
{
	instruction_t _opcodes[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	int i;
	stack_t *stack;

	for (i = 0; _opcodes[i].opcode; i++)
	{
		if (strcmp(opcd, _opcodes[i].opcode) == 0)
		{
			_opcodes[i].f(stack, line_number);
			return;
		}
		if (strlen(opcd) != 0 && opcd[0] != '#')
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcd);
			exit(EXIT_FAILURE);
		}
	}
}
