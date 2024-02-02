#include "hash_tables.h"

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm.
 *
 * @str: String to be used to find the hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned int hash_value = 5381;
	int i = 0;

	while (str[i])
	{
		hash_value = (hash_value * 33) +  str[i];
		i++;
	}

	return (hash_value);
}
