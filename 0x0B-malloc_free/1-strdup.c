#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter
 * @str: Pointer to the string
 * Return: NULL if str = NULL, , a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *cpy_str;
	int size, index;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	cpy_str = malloc((size + 1) * sizeof(char));

	if (cpy_str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		cpy_str[index] = str[index];
	}
	return (cpy_str);
}
