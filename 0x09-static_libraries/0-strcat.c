#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * Return: Character after apending src to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length, src_length;

	dest_length = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	for (src_length = 0; src[src_length] != '\0'; src_length++)
	{
		dest[dest_length] = src[src_length];
		dest_length++;
	}
	dest[dest_length] = '\0';

	return (dest);
}
