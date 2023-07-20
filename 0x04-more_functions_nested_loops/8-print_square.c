#include "main.h"

/**
 * print_square - A function that prints a square, followed by a new line.
 * size: The size of the square
 * Return: void (Nothing)
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
