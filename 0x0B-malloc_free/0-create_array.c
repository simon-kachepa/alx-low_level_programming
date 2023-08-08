#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of an array
 * @c: character to be inserted in an array
 * Return: NULL if size = 0, pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		str[index] = c;
	}
	return (str);
}
