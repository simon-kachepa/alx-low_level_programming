#include "main.h"

/**
 * _strchr - A pointer function that locates a character in a string
 * @s: pointer to a string
 * @c: character to be located in s if found
 * Return: c if c exist in s, or NULL if c does not exist in s
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
