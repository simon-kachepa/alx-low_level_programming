#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number
 * @n: Decimal number to be evaluated
 * Return: void (Nothing)
 */

void print_binary(unsigned long int n)
{
	int index, count;
	unsigned long int num;

	count = 0;
	index = 63;
	while (index >= 0)
	{
		num = n >> index;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
		index--;
	}
	if (!count)
	{
		_putchar('0');
	}
}
