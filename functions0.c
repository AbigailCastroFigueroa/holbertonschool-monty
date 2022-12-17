#include "monty.h"

/**
 * swap - swap the top two elements.
 * @stack: doubly linked list.
 * @line_number: line where the instruction is at.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int tmp_n;

	if ((length_of_stack(stack)) < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short.", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp = *stack;
		tmp_n = tmp->n;
		tmp->n = tmp->next->n;
		tmp->next->n = tmp_n;
	}
}

/**
 * length_of_stack - gives the amount of nodes in a linked list.
 * @stack: double linked list.
 *
 * Return: the amount of nodes.
 */
int length_of_stack(stack_t **stack)
{
	stack_t *tmp;
	int i;

	tmp = *stack;

	for (i = 0; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}

/**
 * add - add the top two elements.
 * @stack: doubly linked list.
 * @line_number: line where the instruction is at.
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *tmp;

	if ((length_of_stack(stack)) < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short.", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp = *stack;
		sum = tmp->n + tmp->next->n;
		*stack = tmp->next;
		(*stack)->n = sum;
		(*stack)->prev = NULL;
		free(tmp);
	}
}

/**
 * pint - print the data from the top of the stack
 * @stack: doubly linked list
 * @line_number: line where the instruction is at.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty.", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp = *stack;

		printf("%d\n", tmp->n);
	}
}

/**
 * pall - print the stack content.
 * @stack: doubly linked list
 * @line_number: line where the instruction is at.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

