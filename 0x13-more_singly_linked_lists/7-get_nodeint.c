#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: linked list.
 * @index: index of the desired node to be returned.
 *
 * Return: nth node. NULL otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, len = 0;
	listint_t *tmp;

	if (head)
	{
		tmp = head;
		while (tmp)
		{
			len++;
			tmp = tmp->next;
		}
		if (index >= len)
			return (NULL);

		for (i = 0; i <= index; i++)
		{
			if (i == index)
			return (head);
			head = head->next;
		}
	}
	return (NULL);
}
