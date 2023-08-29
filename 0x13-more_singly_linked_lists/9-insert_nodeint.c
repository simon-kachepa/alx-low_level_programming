#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a
 * given position.
 * @head: Pointer to a pointer to the first node
 * @idx: the index of the list where the new node should be added
 * @n: The data of the newly created node
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not
 * add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *tmp;
	unsigned int index;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL || head == NULL)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->next = NULL;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

	index = 0;
	ptr = *head;
	while ((ptr != NULL) && (index < idx))
	{
		ptr = ptr->next;
		index++;
	}
	tmp->next = ptr->next;
	ptr->next = tmp;

	return (tmp ? tmp : NULL);
}
