#include "monty.h"

/**
 * pop - remove the top element.
 * @stack: doubly linked list.
 * @line_number: line where the instruction is at.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		*stack = tmp->next;
		if (*stack != NULL)
			(*stack)->prev = NULL;
		free(tmp);
	}
}

/**
 * nop - does nothing.
 * @stack: doubly linked list.
 * @line_number: line where the instruction is at.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void)line_number;
}

/**
 * free_all - frees the global variable members
 *
 * Return: void
 */
void free_all(void)
{

	free(info.buffer);
	free_list(info.stack);
	if (info.filename)
		fclose(info.filename);
}

/**
 * free_list - frees the linked list
 * @stack: linked list
 *
 * Return: void
 */

void free_list(stack_t *stack)
{
	stack_t *tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}

/**
* push - push num to top of the stack
* @stack: pointer to pointer
* @line_number: unsigned int
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *tmp = *stack;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = info.data;
	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		tmp->prev = new;
	*stack = new;
}

