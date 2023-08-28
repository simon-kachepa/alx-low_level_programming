#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 * node of a listint_t linked list.
 * @head: Pointer to the first node
 * @index: The index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	i = 0;
	ptr = head;
	while ((ptr != NULL) & (i < index))
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr ? ptr : NULL);
}
