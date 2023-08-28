#include "lists.h"

/**
 * listint_len - A function that returns the number of
 * elements in a linked listint_t list.
 * @h: Pointer to the first node
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
