#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list.
 * @head: linked list.
 * @index: node's index to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1 = *head, *tmp2 = *head;
	unsigned int i, len = 0;

	if (*head == NULL)
		return (-1);
	while (tmp1 != NULL)
	{
		len++;
		tmp1 = tmp1->next;
	}

	if (index >= len)
		return (-1);

	for (i = 0; i + 1 <= index; i++)
		tmp2 = tmp2->next;

	if (tmp2->next == NULL && tmp2->prev == NULL)
	{
		*head = NULL;
		free(tmp2);
		return (1);
	}
	if (tmp2->next == NULL)
	{
		tmp2->prev->next = NULL;
		free(tmp2);
		return (1);
	}
	if (tmp2->prev == NULL)
	{
		tmp2->next->prev = NULL;
		*head = tmp2->next;
		free(tmp2);
		return (1);
	}
	tmp2->next->prev = tmp2->prev;
	tmp2->prev->next = tmp2->next;
	free(tmp2);
	return (1);
}
