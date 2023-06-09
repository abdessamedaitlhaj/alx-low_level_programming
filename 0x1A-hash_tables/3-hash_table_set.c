#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	if (key == NULLi || key == "" || value == NULL)
	{
		free(node);
		return (0);
	}
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	index = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
