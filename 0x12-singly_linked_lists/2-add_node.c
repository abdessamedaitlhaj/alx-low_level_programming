#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: list to be modified.
 * @str: the new node to be added.
 *
 * Return: address of the new element. NULL otherwise.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);

}
