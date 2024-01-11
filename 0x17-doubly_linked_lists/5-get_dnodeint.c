#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list.
 * @head: Pointer to the first node
 * @index: he index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list, else
 * if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	if (!ptr)
		return (NULL);

	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
