#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list.
 * @head: linked list to be modified.
 * @str: string.
 *
 * Return: address of the new element. NULL otherwise.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL)
	new->str = strdup(str);
	new->len = strlen(str);
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
