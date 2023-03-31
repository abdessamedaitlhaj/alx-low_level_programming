#include "lists.h"

/**
 * free_list - frees a list.
 * @head: list to be freed.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	if (head)
	{
		while (tmp)
		{
			free(tmp->str);
			tmp = tmp->next;
		}
		free(head);
	}
}
