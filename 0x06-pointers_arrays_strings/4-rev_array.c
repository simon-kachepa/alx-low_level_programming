#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: Pointer to an array of intergers
 * @n: The number of elements of the array
 * Return: void (Nothing)
 */

void reverse_array(int *a, int n)
{
	int index, tmp;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n-1-index];
		a[n-1-index] = a[index];
		a[index] = tmp;
	}
}
