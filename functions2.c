#include "monty.h"

/**
 * search_match - compare token with the opcode string
 * @token: token string
 * @stack: linked list
 * @line_number: line where the instruction is at.
 */

void search_match(char *token, stack_t **stack, unsigned int line_number)
{
	int i, match_instruction = 0;

	instruction_t list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}};

	for (i = 0; list[i].opcode != NULL; i++)
		if (strcmp(token, list[i].opcode) == 0)
		{
			list[i].f(stack, line_number);
			match_instruction = 1;
		}
	if (!match_instruction)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, info.token);
		exit(EXIT_FAILURE);
	}
}
