#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @n: Number to be computed
 * Return: Absolute value of the number or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int absolute_value;

		absolute_value = n * -1;
		return (absolute_value);
	}
	else
	{
		return (n);
	}
}
