#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: NULL on failure or pointer to a newly allocated space in
 * memory which contains the contents of s1, followed by the
 * contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, s1_index, s2_index, new_index;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_size = 0;
	while (s1[s1_size] != '\0')
	{
		s1_size++;
	}
	s2_size = 0;
	while (s2[s2_size] != '\0')
	{
		s2_size++;
	}
	new_str = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	s1_index = new_index = 0;
	while (s1[s1_index] != '\0')
	{
		new_str[new_index] = s1[s1_index];
		s1_index++, new_index++;
	}
	s2_index = 0;
	while (s2[s2_index] != '\0')
	{
		new_str[new_index] = s2[s2_index];
		s2_index++, new_index++;
	}
	new_str[new_index] = '\0';
	return (new_str);
}
