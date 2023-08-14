#include "3-function_like_macro.h"
#include <stdio.h>

/**
 * ABS - function that finds an absolute value of a number
 * @x: integer number
 * Return: absolute value of x
 */

int ABS(int x)
{
	if (x < 0)
	{
		return (-1 * x);
	}
	return (x);
}
