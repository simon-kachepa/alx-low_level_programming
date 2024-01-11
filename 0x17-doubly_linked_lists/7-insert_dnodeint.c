#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: Pointer to a pointer to the first node
 * @idx: the index of the list where the new node should be added starts at 0
 * @n: The data to be inserted to the newly created node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *ptr;
	unsigned int i;

	tmp = NULL;
	if (idx == 0)
		tmp = add_dnodeint(h, n);
	else
	{
		ptr = *h;
		i = 1;
		if (ptr != NULL)
			while (ptr->prev != NULL)
				ptr = ptr->prev;
		while (ptr != NULL)
		{
			if (i == idx)
			{
				if (ptr->next == NULL)
					tmp = add_dnodeint_end(h, n);
				else
				{
					tmp = malloc(sizeof(dlistint_t));
					if (tmp)
					{
						tmp->n = n;
						tmp->next = ptr->next;
						tmp->prev = ptr;
						ptr->next->prev = tmp;
						ptr->next = tmp;
					}
				}
				break;
			}
			ptr = ptr->next;
			i++;
		}
	}

	return (tmp);
}
