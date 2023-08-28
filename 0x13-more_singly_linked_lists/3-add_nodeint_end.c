#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a listint_t list
 * @head: Pointer to a pointer to the first node
 * @n: Data value of the newly created node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
        tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;

	return (tmp);
}
