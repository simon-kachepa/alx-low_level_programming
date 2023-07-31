#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: pointer to an array
 * @size: size of an array
 * Return: void (Nothing)
 */

void print_diagsums(int *a, int size)
{
	int sum_first = 0, sum_second = 0, index;

	for (index = 0; index < size; index++)
	{
		sum_first += a[index];
		a += size;
	}
	a -= size;

	for (index = 0; index < size; index++)
	{
		sum_second += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum_first, sum_second);
}
