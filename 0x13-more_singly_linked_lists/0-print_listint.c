#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list to be printed.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int len = 0, i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
