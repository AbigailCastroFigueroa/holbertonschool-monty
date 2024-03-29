#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linkded list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_variable - structure of variables containing the info
 * @data: value store in the node
 * @buffer: line from getline that contain the given instruction.
 * @filename: name of the file given
 * @stack: pointer to the head of the linked list
 * @text: content of the file.
 * @token: token
 *
 * Description: variables shared between functions
 */
typedef struct global_variable
{
	int data;
	char *buffer;
	FILE *filename;
	stack_t *stack;
	char *text;
	char *token;
} glo_var;

extern glo_var info;

/* Prototypes for mandatory taskss */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

/* Extra functions */
int length_of_stack(stack_t **stack);
char *is_a_number(char *value, unsigned int line_number);
void search_match(char *token, stack_t **stack, unsigned int line_number);
void free_all(void);
void free_list(stack_t *stack);
#endif
