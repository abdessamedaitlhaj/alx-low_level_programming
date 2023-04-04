#include "lists.h"

/**
 * add_nodeint_end - push a node to the end of a linked list.
 * @head: linked list to be modified.
 * @n: the data.
 *
 * Return: the address of the new element. NULL otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (tmp)
		{
			if (tmp->next == NULL)
			{
				tmp->next = new;
				break;
			}
			tmp = tmp->next;
		}
	}
	return (*head);
}
