#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as
 * a parameter on each element of an array.
 * @array: Array to be evaluated
 * @size: the size of the array
 * @action: pointer to the function you need to use
 * Return: void (Nothing)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
