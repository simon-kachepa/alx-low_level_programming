#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints all single digit numbers of base 10
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
