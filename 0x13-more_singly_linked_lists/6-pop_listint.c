#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: Pointer to a pointer to head;
 * Return: The data of the head's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	unsigned int data;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);

	return (data);


}
