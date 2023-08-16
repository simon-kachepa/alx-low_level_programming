#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: The array to be evaluated
 * @size: the size of an array
 * @cmp: A pointer to the function to be used to compare values
 * Return: the index of the first element, zero otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if ((array == NULL) || (size <= 0) || (cmp == NULL))
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}
	return (-1);
}
