#include "main.h"

/**
 * print_alphabet_x10 - Function that prints alphabet 10 times
 * Return: void (Nothing)
 */

void print_alphabet_x10(void)
{
	int letter;
	int times;

	for (times = 1; times <= 10; times++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
