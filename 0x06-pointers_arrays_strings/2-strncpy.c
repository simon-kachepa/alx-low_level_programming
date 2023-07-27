#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: Pointer to the destination array where a string is to be copied to
 * @src: The string to be copied
 * @n: The number of character to be copied from the src
 * Return: String character after copying from src to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
