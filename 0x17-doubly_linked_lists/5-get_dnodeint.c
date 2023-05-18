#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: linked list.
 * @index: the index of the node.
 *
 * Return: the node at index. NULL otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, len = 0;
	dlistint_t *tmp = head;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		len++;
		head = head->next;
	}

	if (index >= len)
		return (NULL);

	for (i = 0; i + 1 <= index; i++)
		tmp = tmp->next;
	return (tmp);
}
