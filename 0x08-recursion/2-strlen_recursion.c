#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: Pointer to the string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
