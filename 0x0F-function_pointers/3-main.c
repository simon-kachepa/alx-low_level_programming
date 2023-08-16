#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - A function that prints the result of simple operations.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 * Return: 0 (Success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int input1, input2;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	input1 = atoi(argv[1]);
	operation = argv[2];
	input2 = atoi(argv[3]);

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operation == '/' && input2 == 0) ||
	    (*operation == '%' && input2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operation)(input1, input2));

	return (0);
}
