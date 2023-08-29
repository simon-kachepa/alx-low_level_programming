#include "lists.h"

size_t traversed_listint_size(const listint_t *head);

/**
 * traversed_listint_size - Function that counts and return the number of unique nodes
 * @head: Pointer to the first node
 * Return: The number of unique nodes
 */

size_t traversed_listint_size(const listint_t *head)
{
	listint_t *prev, *foward;
	size_t count;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	prev = head->next;
	foward = head->next->next;
	count = 1;

	while (foward != NULL)
	{
		if (prev == foward)
		{
			prev = head;
			while (prev != foward)
			{
				count++;
				prev = prev->next;
				foward = foward->next;
			}
			prev = prev->next;
			while (prev != foward)
			{
				count++;
				prev = prev->next;
			}
			return (count);
		}
		prev = prev->next;
		foward = foward->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: Pointer to the first node
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count, index;

	count = traversed_listint_size(head);
	if (count == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		index = 0;
		while (index < count)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
