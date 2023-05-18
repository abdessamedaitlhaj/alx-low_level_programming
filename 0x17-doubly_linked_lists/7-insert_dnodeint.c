#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: linked list.
 * @idx: the index of the list where the new node should be added.
 * @n: the data to be added.
 * Return: the address of the new node. NULL otherwise.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp1 = *h, *tmp2 = *h;
	unsigned int len = 0, i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
		while (tmp1 != NULL)
		{
			len++;
			tmp1 = tmp1->next;
		}
		if (idx >= len)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; i + 1 <= idx; i++)
			tmp2 = tmp2->next;

		tmp2->prev->next = NULL;
		new = add_dnodeint_end(h, n);
		new->next = tmp2;
	}
	return (new);
}
