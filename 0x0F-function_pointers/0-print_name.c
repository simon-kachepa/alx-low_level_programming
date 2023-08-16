#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: Pointer to a name of a person
 * @f: pointer to a function
 * Return: void (Nothing)
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
	{
		return;
	}
	f(name);
}
