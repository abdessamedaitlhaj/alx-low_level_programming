#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: the linked list to be freed.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		free(tmp->next);
		tmp = tmp->next;
	}
	free(head);
}
