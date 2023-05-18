#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: linked list.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
