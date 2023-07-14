#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints alphabet in lowercase except e&q
 * Return: 0 (Success)
 */

int main(void)
{
	int lowercase = 97;

	while (lowercase <= 122)
	{
		if (lowercase == 101 || lowercase == 113)
		{
			lowercase++;
			continue;
		}
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
