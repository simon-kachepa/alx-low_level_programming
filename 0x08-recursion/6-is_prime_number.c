#include "main.h"

int prime_number(int num, int fact);

/**
 * is_prime_number - A function that returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: Interger number
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_number(n, 1));
}

/**
 * prime_number - function that check if a number has factors
 * @num: Interger number
 * @fact: interger number to be checked whether its a factor of num or not
 * Return: interger
 */

int prime_number(int num, int fact)
{
	if (num <= 1)
	{
		return (0);
	}
	else if ((num % fact) == 0 && fact > 1)
	{
		return (0);
	}
	else if ((num / fact) < fact)
	{
		return (1);
	}
	return (prime_number(num, fact + 1));
}
