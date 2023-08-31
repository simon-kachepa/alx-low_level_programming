#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Decimal number
 * @m: Decimal number
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, i;
	unsigned long int number;
	unsigned long int exclusive;

	exclusive = n ^ m;
	count = 0;
	i = 63;
	while (i >= 0)
	{
		number = exclusive >> i;
		if (number & 1)
		{
			count++;
		}
		i--;
	}
	return (count);
}
