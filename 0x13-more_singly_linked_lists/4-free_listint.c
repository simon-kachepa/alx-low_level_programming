#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: Pointer to the first node
 * Return: void (Nothing)
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		free(head);
	}

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

