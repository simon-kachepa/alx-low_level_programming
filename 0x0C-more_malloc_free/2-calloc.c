#include "main.h"
#include <stdlib.h>

/**
 * *_meminit - initialize memory with a constant byte
 * @str: Pointer to memory area to be filled
 * @c: character to be copied
 * @num: number of times to copy b
 * Return: pointer to the memory area str
 */

char *_meminit(char *str, char c, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
	{
		str[i] = c;
	}
	return (str);
}

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: The number of elements in an array
 * @size: The size of each element in an array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array_mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array_mem = malloc(nmemb * size);
	if (array_mem == NULL)
	{
		return (NULL);
	}

	_meminit(array_mem, 0, nmemb * size);

	return (array_mem);
}
