#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @c: Number to be computed
 * Return: Absolute value of the number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absolute_value;

		absolute_value = c * -1;
		return (absolute_value);
	}
	else
	{
		return (c);
	}
}
