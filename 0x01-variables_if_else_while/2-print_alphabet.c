#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints alphabet in lowercase using putcher
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
