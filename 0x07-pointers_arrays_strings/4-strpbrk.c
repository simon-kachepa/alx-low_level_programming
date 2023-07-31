#include "main.h"

/**
 * _strpbrk - A pointer function that searches a string for
 * any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 * Return: pointer to the bytes s, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index_a, index_s;

	for (index_s = 0; s[index_s] >= '\0'; index_s++)
	{
		for (index_a = 0; accept[index_a] >= '\0'; index_a++)
		{
			if (s[index_s] == accept[index_a])
			{
				return (s + index_s);
			}
		}
	}
	return ('\0');
}
