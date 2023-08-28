#include "lists.h"

/**
 * free_listint2 - A  function that frees a listint_t list.
 * @head: Pointer to a pointer to the first node
 * Return: void (Nothing)
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
}
