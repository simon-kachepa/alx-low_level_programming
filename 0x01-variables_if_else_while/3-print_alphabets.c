#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints alphabet in lowercase and uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	int lowercase = 97;
	int uppercase = 65;

	while (lowercase <= 122)
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 90)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
