#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 * @h: list to be printed.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
