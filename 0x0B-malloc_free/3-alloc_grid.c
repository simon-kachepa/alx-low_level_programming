#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: Denotes the width of the array
 * @height: Denotes the height of an array
 * Return: NULL if width or height is 0 or negative, NULL on failure,
 * returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int rows, columns;
	int **new_ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	new_ptr = malloc(height * sizeof(int *));
	if (new_ptr == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		new_ptr[rows] = malloc(width * sizeof(int));
		if (new_ptr[rows] == NULL)
		{
			for (; rows >= 0; rows--)
				free(new_ptr[rows]);
			free(new_ptr);
			return (NULL);
		}
	}

	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
		{
			new_ptr[rows][columns] = 0;
		}
	}
	return (new_ptr);
}
