#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: Point to a pointer to the first node
 * @n: data to be inserted to the newly created node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;

	tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
