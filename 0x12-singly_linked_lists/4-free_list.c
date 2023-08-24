#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: Pointer to the first node
 * Return: void (Nothing)
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
