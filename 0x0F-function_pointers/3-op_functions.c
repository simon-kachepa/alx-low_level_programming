#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - A function that adds two integers
 * @a: First integer
 * @b: second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that subtract two integers
 * @a: First integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that multiply two integers
 * @a: First integer
 * @b: second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that devides two integers
 * @a: First integer
 * @b: second integer
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A function that finds the modulus of two integers
 * @a: First integer
 * @b: second integer
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
