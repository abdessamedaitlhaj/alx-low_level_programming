#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: linked list.
 * @n: data to be added.
 *
 * Return: the address of the new element. NULL otherwise.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
