#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of the first bytes of s2 to be cncatenated to s1
 * Return: Pointer to the newly concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_index, s2_index, new_index, s1_length, s2_length;
	char *concat_res;

	s1_length = 0;
	while (s1 && s1[s1_length])
	{
		s1_length++;
	}
	s2_length = 0;
	while (s2 && s2[s2_length])
	{
		s2_length++;
	}
	if (s2_length < n)
		concat_res = malloc((s1_length + s2_length + 1) * sizeof(char));
	else
		concat_res = malloc((s1_length + n + 1) * sizeof(char));
	if (concat_res == NULL)
		return (NULL);
	s1_index = 0, new_index = 0;
	while (s1_index < s1_length)
	{
		concat_res[new_index] = s1[s1_index];
		s1_index++, new_index++;
	}
	s2_index = 0;
	while ((n < s2_length) && (new_index < (s1_length + n)))
	{
		concat_res[new_index] = s2[s2_index];
		s2_index++, new_index++;
	}
	while ((n >= s2_length) && (new_index < (s1_length + s2_length)))
	{
		concat_res[new_index] = s2[s2_index];
		s2_index++, new_index++;
	}
	concat_res[new_index] = '\0';
	return (concat_res);
}
