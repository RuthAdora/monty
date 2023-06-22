#include "monty.h"
/**
 * push - adds an element to the stuck
 * @stack: double pointer to the head of stack
 * @line_number: script line number
 * Return: No return
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	char *opcode;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	opcode = strtok(NULL, "\n\t\r ");

	if (opcode == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: USAGE: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	
	new_node->n = atoi(opcode);
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
