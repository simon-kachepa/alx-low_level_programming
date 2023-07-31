#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to bytes from accept
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int index_s, index_a;

	for (index_s = 0; s[index_s] >= '\0'; index_s++)
	{
		for (index_a = 0; accept[index_a]; index_a++)
		{
			if (s[index_s] == accept[index_a])
			{
				counter++;
				break;
			}
			else if (accept[index_a + 1] == '\0')
			{
				return (counter);
			}
		}
	}
	return (counter);
}
