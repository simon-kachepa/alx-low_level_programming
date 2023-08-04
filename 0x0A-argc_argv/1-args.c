#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: the number of arguments
 * @argv:Pointer to an array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
