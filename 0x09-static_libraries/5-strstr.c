#include "main.h"

/**
 * _strstr - A pointer function that locates a substring
 * @haystack: Pointer to the fisrst string
 * @needle: Pointer to the substring that need to be found
 * Return: Pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
