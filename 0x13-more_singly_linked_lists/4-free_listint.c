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

	if (head)
	{
		tmp = head;
		while (tmp)
		{
			head = head->next
			free(tmp);
			tmp = head;
		}
	}
}
