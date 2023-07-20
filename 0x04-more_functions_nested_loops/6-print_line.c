#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: void (Nothing)
 */

void print_line(int n)
{
	int times;

	for (times = 0; times < n; times++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
