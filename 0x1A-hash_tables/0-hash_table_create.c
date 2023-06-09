#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 *
 * Return: pointer to the newly created hash table. NULL otherwise.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = NULL;

	t = malloc(sizeof(hash_table_t));
	if (t->array == NULL)
		return (NULL);

	t->size = size;
	t->array = malloc(sizeof(hash_node_t) * (size / sizeof(hash_node_t)));
	if (t->array == NULL)
		return (NULL);

	return (t);
}
