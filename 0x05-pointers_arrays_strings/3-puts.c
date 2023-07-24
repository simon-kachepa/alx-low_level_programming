#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line, to stdout
 * @str: Pointer to the string
 * Return: void (Nothing)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
