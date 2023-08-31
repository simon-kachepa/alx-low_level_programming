#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n;
	char *s;

	n = 1;
	s = (char *) & n;

	return (*s);
}
