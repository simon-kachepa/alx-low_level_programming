#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: Pointer to the first character
 * @src: Pointer to the second character
 * @n: The number of bytes to be used from src
 * Return: The character after concatinating character
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length, src_index;

	dest_length = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	for (src_index = 0; src_index < n && src[src_index] != '\0'; src_index++)
	{
		dest[dest_length] = src[src_index];
		dest_length++;
	}
	dest[dest_length] = '\0';

	return (dest);
}
