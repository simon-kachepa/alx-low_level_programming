#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: Pointer to a string
 * Return: The size of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}
