#include "lists.h"

/**
 * free_listint2 - A  function that frees a listint_t list.
 * @head: Pointer to a pointer to the first node
 * Return: void (Nothing)
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
