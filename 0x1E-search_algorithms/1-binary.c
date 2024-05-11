#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: The index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
