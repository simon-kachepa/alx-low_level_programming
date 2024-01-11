#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: Pointer to the first node
 * Return: the sum of all the data (n) of a dlistint_t linked list, else
 * 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while(ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
