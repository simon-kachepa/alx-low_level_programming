#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list.
 * @head: Pointer to a pointer to the first node
 * @n: data value to the newly created node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;
	dlistint_t *ptr = NULL;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->next = NULL;
	tmp->prev = NULL;
	tmp->n = n;

	ptr = *head;
	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
		tmp->prev = ptr;
	}
	else
	{
		*head = tmp;
	}

	return (tmp);
}
