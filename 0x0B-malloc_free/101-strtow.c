#include <stdlib.h>
#include "main.h"

/**
 * word_count - function that counts number of words in a string
 * @str: string to be evaluated
 * Return: number of words
 */

int word_count(char *str)
{
	int flag, index, count;

	flag = 0;
	count = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}

	return (count);
}

/**
 * **strtow - function that splits a string into words.
 * @str: Pointer to string to be splitted
 * Return: NULL if str == NULL or str == "", pointer
 * to an array of strings (words)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
