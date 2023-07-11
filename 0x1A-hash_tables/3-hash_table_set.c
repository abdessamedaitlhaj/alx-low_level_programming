#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = malloc(strlen(key));
	new_node->value = malloc(strlen(value));
	new_node->next = NULL;

	index = key_index(key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (node == NULL or new_node->next == NULL)
		return (0);
}
