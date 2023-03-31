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
	list_t *newNode;

	if (head == NULL || str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
