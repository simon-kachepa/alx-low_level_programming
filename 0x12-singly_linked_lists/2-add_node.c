#include "lists.h"

/**
 * add_node - A function that adds a new node at th
 *  beginning of a list_t list.
 *  @head: Pointer to the first node
 *  @str: Data to be inserted in a newly created node
 *  Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp->str = strdup(str);
		tmp->len = length;
		tmp->next = (*head);
	}
	(*head) = tmp;

	return (*head);
}
