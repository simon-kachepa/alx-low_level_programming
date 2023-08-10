#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - A function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the previously allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			new_ptr[index] = old_ptr[index];
	}
	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			new_ptr[index] = old_ptr[index];
	}
	free(ptr);
	return (new_ptr);
}
