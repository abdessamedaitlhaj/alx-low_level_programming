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

	if (head == NULL)
		return;
	tmp = *head;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
	*head = NULL;
}
