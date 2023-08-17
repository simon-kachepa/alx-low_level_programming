#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void (Nothing)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int index;

	va_start(strs, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strs, char*);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if ((index != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strs);
}
