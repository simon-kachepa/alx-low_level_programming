#include "main.h"
/**
 * leet - encode into 1337speak
 * @input: input value
 * Return: the input value
 */
char *leet(char *input)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; input[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (input[i] == s1[j])
			{
				input[i] = s2[j];
			}
		}
	}
	return (input);
}
