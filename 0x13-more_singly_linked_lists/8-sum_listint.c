#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: Pointer to the first node
 * Return: the sum of the data of all the nodes,if the list
 * is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
