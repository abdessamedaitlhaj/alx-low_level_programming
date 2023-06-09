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
	hash_node_t *node, *tmp;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	if (key == NULL || key[0] == '\0' || value == NULL)
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

	tmp = ht->array[index];
	while(tmp)
	{
		if (strcmp(tmp->key, key) == 0)
        	{
			free(tmp->key);
			free(tmp->value);
			tmp->key = malloc(strlen(key) + 1);
			tmp->value = malloc(strlen(value) + 1);
			strcpy(tmp->key, key);
			strcpy(tmp->value, value);
			return (1);
        	}
		tmp = tmp->next;
	}


	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
