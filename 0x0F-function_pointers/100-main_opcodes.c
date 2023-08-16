#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function.
 * @argc: The number of arguments
 * @argv: An array of arguments
 * Return: (0) (Success)
 */

int main(int argc, char *argv[])
{
	int size, index;
	char *_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	_arr = (char *)main;

	for (index = 0; index < size; index++)
	{
		if (index == size - 1)
		{
			printf("%02hhx\n", _arr[index]);
			break;
		}
		printf("%02hhx ", _arr[index]);
	}
	return (0);
}
