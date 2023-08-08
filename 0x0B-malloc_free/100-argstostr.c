#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all
 * the arguments of your program
 * @ac: An interger
 * @av: pointer to a pointer to array
 * Return: NULL if ac == 0 or av == NULL, pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, index, size;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	size += ac;

	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		ptr[index] = av[i][j];
		index++;
	}
	if (ptr[index] == '\0')
	{
		ptr[index++] = '\n';
	}
	}
	return (ptr);
}
