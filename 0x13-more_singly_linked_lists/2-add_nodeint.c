#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: linked list.
 * @n: data.
 *
 * Return: the address of the new element. NULL otherwise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
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
