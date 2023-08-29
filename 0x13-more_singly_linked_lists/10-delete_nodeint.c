#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index index of a listint_t linked list.
 * @head: Pointer to a pointer to the first node
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int i;

	ptr = *head;
	tmp = NULL;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);

	}

	i = 0;
	while (i < index - 1)
	{
		if ((ptr == NULL))
		{
			return (-1);
		}

		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
	{
		tmp = ptr->next;
		ptr = NULL;
		free(tmp);
	}
	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);

	return (1);
}
