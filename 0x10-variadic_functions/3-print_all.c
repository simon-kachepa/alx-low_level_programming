#include <stdarg.h>
#include <stdio.h>

#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 * @format: the list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *_str, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					_str = va_arg(list, char *);
					if (!_str)
						_str = "(nil)";
					printf("%s%s", sep, _str);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(list);
}
