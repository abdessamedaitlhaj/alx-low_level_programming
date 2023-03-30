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
	unsigned int i, len = 0, n = h->len;

	for (i = 0; i < n; i++)
	{
		if (h ==  NULL)
			break;
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			len++;
		}
		else
		{
			printf("%s", h->str);
			len++;
		}
		h = h->next;
	}
	return (len);
}
