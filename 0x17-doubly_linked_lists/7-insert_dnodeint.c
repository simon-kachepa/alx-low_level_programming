#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: Pointer to a pointer to the first node
 * @idx: the index of the list where the new node should be added starts at 0
 * @n: The data to be inserted to the newly created node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_n = *h;
	dlistint_t *next_n = NULL;
	dlistint_t *tmp = NULL;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	while (idx > 1)
	{
		if (!prev_n)
			return (NULL);
		prev_n = prev_n->next;
		idx--;
	}
	next_n = prev_n->next;
	prev_n->next = tmp;
	tmp->prev = prev_n;
	tmp->next = next_n;
	next_n->prev = tmp;

	return (tmp);
}
