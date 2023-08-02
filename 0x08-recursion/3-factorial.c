#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: Interger number
 * Return: -1 If n is lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
