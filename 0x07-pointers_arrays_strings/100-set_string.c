#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: Pointer to a pointer
 * @to: pointer to a character
 * Return: void (Nothing)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
