#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}
