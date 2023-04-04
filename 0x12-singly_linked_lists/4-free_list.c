#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head: linked list.
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
			head = head->next;
			free(tmp);
			tmp = head;
		}
	}
}
