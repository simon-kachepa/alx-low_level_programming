#include "main.h"

/**
 * wildcmp - A function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: 1 if s1 and s2 are identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
