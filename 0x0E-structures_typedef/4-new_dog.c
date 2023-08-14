#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that finds the length of a string
 * @s: string to be evaluated
 * Return: length of s
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * _strcpy - function that copies the content of src to dest
 * @dest: Pointer to the destination where the string from
 * src is to be copied to
 * @src: Pointer to the string to be copied to dest
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, index;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (index = 0; index < length; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 * @name: name element of the new dog
 * @age: age element of the new dog
 * @owner: owner element of the new dog
 * Return: Pointer to the new dog on success, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
