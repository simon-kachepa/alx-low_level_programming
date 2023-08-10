#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - Function checks if a string contains a non-digit char
 * @str: string to be checked for a non-digit
 * Return: 0 if there exist a non-digit in str, 1 str contains digits only
 */

int is_digit(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/**
 * _strlen - function that finds the length of a string
 * @str: string to evaluate
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int index, count;

	index = 0, count = 0;
	while (str[index] != '\0')
	{
		index++;
		count++;
	}
	return (count);
}

/**
 * errors - function that prints error message
 * Return: void (Nothing)
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int str1_len, str2_len, res_len, index, remainder, num1, num2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	str1_len = _strlen(str1);
	str2_len = _strlen(str2);
	res_len = str1_len + str2_len + 1;
	result = malloc(sizeof(int) * res_len);
	if (result == NULL)
		return (1);
	for (index = 0; index <= str1_len + str2_len; index++)
		result[index] = 0;
	for (str1_len = str1_len - 1; str1_len >= 0; str1_len--)
	{
		num1 = str1[str1_len] - '0';
		remainder = 0;
		for (str2_len = _strlen(str2) - 1; str2_len >= 0; str2_len--)
		{
			num2 = str2[str2_len] - '0';
			remainder += result[str1_len + str2_len + 1] + (num1 * num2);
			result[str1_len + str2_len + 1] = remainder % 10;
			remainder /= 10;
		}
		if (remainder > 0)
			result[str1_len + str2_len + 1] += remainder;
	}
	for (index = 0; index < res_len - 1; index++)
	{
		if (result[index])
			a = 1;
		if (a)
			_putchar(result[index] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
