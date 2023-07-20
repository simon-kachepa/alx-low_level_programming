#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers, from 0 to 9
 * Return: void (Nothing)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
