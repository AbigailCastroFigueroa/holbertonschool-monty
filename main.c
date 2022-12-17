#include "monty.h"

glo_var info;
/**
 * main - Entry point
 * @argc: amount of arguments given
 * @argv: array of arguments
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	size_t n = 0;
	unsigned int line_number = 0;
	char *value;

	info.stack = NULL, info.filename = NULL, info.buffer = NULL,
	info.token = NULL, info.text = argv[1];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	info.filename = fopen(argv[1], "r");
	if (!info.filename)
	{
		fprintf(stderr, "Can't open file %s\n", info.text);
		exit(EXIT_FAILURE);
	}
	while (getline(&info.buffer, &n, info.filename) != EOF)
	{
		line_number++;
		info.token = strtok(info.buffer, " \t\n");
		if (!info.token)
			continue;
		if (strcmp(info.token, "push") == 0)
		{
			value = strtok(NULL, " \t\n");
			if (!value)
			{
				fprintf(stderr, "L%u: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
			info.data = atoi(is_a_number(value, line_number));
		}
		search_match(info.token, &info.stack, line_number);
		free(info.buffer), info.buffer = NULL;
	}
	free_all();
	return (0);
}

/**
 * is_a_number - check if a string is an integer.
 * @value: data given.
 * @line_number: line where the instruction is at.
 *
 * Return: string, if integer.
 */
char *is_a_number(char *value, unsigned int line_number)
{
	unsigned int i = 0;

	if ((value[i] < '0' || value[i] > '9') && value[i] != '-')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	i++;
	while (value[i])
	{
		if (value[i] < '0' || value[i] > '9')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (value);
}
