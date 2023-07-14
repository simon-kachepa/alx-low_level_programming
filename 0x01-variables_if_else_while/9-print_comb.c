#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints single digit numbers followed by a comma
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
