#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list.
 * @h: the list to be printed.
 *
 * Return: the list. NULL otherwise.
 */
size_t print_list(const list_t *h)
{
	int len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		len++;
		h = h->next;
	}
	return (len);
}
