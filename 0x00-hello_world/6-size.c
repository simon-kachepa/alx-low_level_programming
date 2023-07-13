#include <stdio.h>
/**
 * main - A program that prints the sizes of various data types.
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;
	int in;
	long int ln;
	long long int lln;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(in));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ln));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(lln));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}
