#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints lowercase alphabet in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	int lowercase = 122;

	while (lowercase >= 97)
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');
	return (0);
}
