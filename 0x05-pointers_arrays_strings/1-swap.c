#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: Pointer to a first integer variable
 * @b: Pointer to a second integer variable
 * Return: void (Nothing)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
