#include "main.h"
#include <stdlib.h>

/**
 * *array_range - A function that creates an array of integers.
 * @min: smallest element in the array
 * @max: largest element in the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int index, size;
	int *new_array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	new_array = malloc(size * sizeof(int));
	if (new_array == NULL)
	{
		return (NULL);
	}

	for (index = 0; min <= max; index++)
	{
		new_array[index] = min;
		min++;
	}
	return (new_array);
}
