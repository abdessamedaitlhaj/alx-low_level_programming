#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: linked list to be freed.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	if (*head)
	{
		while (tmp)
		{
			*head = (*head)->next;
			free(tmp);
			tmp = *head;
		}
	}
	head = NULL;
}
