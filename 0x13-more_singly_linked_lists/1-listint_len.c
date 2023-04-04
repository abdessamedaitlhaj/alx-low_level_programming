#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: linked list.
 *
 * Return: number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	int i, len = 0;

	for (i = 0; h; i++)
	{
		len++;
		h = h->next;
	}
	return (len);
}
