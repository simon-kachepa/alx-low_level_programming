#include "main.h"

int square_root(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Integer number
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - function that takes a number and its sqrt
 * @n: integer number
 * @i: sqrt of n
 * Return: Natural square root of an interger
 */

int square_root(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	return (square_root(n, i + 1));
}
