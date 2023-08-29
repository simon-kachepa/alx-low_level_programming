#include "lists.h"

/**
 * reverse_listint - A function that reverses a
 * listint_t linked list.
 * @head: Pointer to a pointer to the first node
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *ptr;

	tmp = NULL;
	ptr = *head;

	while (*head != NULL)
	{
		ptr = ptr->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = ptr;
	}
	*head = tmp;

	return (*head);
}
