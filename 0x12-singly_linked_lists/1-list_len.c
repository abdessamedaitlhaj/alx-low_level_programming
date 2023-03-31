#include "lists.h"
#include <stdio.h>

/**
 * list_len - return the number of elements of a list.
 * @h: the list to be printed.
 *
 * Return: the list. NULL otherwise.
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
