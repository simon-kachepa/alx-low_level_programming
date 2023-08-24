#include "lists.h"

/**
 * add_node_end - A function that adds a new node
 * at the end of a list_t list
 * @head: Pointer to the first node
 * @str: String to be added to a newly created node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *ptr = *head;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = length;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (tmp);
}
