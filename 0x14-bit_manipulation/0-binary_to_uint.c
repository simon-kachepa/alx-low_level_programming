#include "main.h"

/**
 * binary_to_uint - A function that converts a binary
 * number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_equiv;

	if (!b)
	{
		return (0);
	}

	decimal_equiv = 0;
	index = 0;
	while (b[index])
	{
		if (b[index] < '0' || (b[index] > '1'))
		{
			return (0);
		}
		decimal_equiv = 2 * decimal_equiv + (b[index] - '0');
		index++;
	}

	return (decimal_equiv);
}
