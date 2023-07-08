#include "hash_tables.h"

/**
 * hash_table_create - function that create hash table
 * @size: the size of the table
 *
 * Return: pointer to the newly created hash table. NULL otherwise.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = NULL;

	t = malloc(sizeof(hash_table_t));
	if (t ==  NULL)
		return (NULL);
	t->array = malloc(sizeof(hash_node_t) * size);
	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}
	t->size = size;

	return (t);
}
