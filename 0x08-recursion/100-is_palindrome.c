#include "main.h"

/**
 * stringLength_recursion - Function that finds the length of the string
 * @s: Pointer to the string
 * Return: The length of the string
 */

int stringLength_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + stringLength_recursion(s + 1));
}

/**
 * check_palindrome - function that compares characters of a
 * string at different indeces
 * @s: Pointer to the string
 * @index_left: Iterator from the left side
 * @index_right: Iterator from the right side
 * Return: Integer
 */

int check_palindrome(char *s, int index_left, int index_right)
{
	if (*(s + index_left) == *(s + index_right))
	{
		if ((index_left == index_right) || (index_left == (index_right + 1)))
		{
			return (1);
		}
		return (0 + check_palindrome(s, index_left + 1, index_right - 1));
	}
	return (0);
}

/**
 * is_palindrome - A function that returns 1 if a string is a
 * palindrome and 0 if not.
 * @s: Pointer to the string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (check_palindrome(s, 0, stringLength_recursion(s) - 1));
}
