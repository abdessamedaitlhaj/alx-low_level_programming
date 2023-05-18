#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: linked list.
 *
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}
