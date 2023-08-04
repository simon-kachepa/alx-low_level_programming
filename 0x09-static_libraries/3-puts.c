#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line, to stdout
 * @s: Pointer to the string
 * Return: void (Nothing)
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
