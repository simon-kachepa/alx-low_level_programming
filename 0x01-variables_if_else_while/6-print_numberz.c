#include <stdio.h>

/**
 * main - Entry point
 * Desription: A program that prints all single digit numbers using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
