#include "main.h"

/**
 * _memcpy - A pointer function that copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: the number of the bytes to be copied from src to dest
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
