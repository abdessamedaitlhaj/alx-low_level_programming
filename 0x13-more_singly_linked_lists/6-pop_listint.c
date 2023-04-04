#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list.
 * @head: linked list.
 *
 * Return: node's data. 0 otherwise.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	tmp = *head;
	if (*head == NULL)
		return (0);
	data  = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
