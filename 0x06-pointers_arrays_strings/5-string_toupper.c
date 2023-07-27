#include "main.h"

/**
 * string_toupper - Function that changes lowercase letters of
 *a string to uppercase
 * @str: Pointer to a string
 * Return: Uppercase character
 */

char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}

	return (str);
}
