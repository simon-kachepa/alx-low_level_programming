#include "lists.h"

/**
 * find_listint_loop - A function that finds the
 * loop in a linked list.
 * @head: Pointer to the first node
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *front, *behind;

	front = behind = head;
	if (head != NULL)
	{
		return (NULL);
	}
	while (behind != NULL && front != NULL && front->next != NULL)
	{
		front = front->next->next;
		behind = behind->next;
		if (front == behind)
		{
			behind = head;
			while (behind != front)
			{
				behind = behind->next;
				front - front->next;
			}
			return (front);
		}
	}

	return (NULL);
}
