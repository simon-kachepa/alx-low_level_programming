#include "main.h"

/**
 * _memset - A pointer function that fills memory with a constant byte
 * @s: a pointer to a character
 * @b: constant byte
 * @n: number of the first bytes
 * Return: s (pointer to the memory)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
