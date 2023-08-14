#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs.
 * @d: dog of type struct to be freed
 * Return: void (Nothing)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
