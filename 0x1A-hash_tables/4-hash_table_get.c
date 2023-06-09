#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table.
 * @key: the key.
 *
 * Return: the value associated with the element. NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key[0] == '\0' || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
