#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
			break;
	}

	if (i++ == ht->size)
	{
		printf("{}\n");
		return;
	}

	printf("{'%s': '%s', ", tmp->key, tmp->value);
	tmp = tmp->next;
	for (; i < ht->size; i++)
	{
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		tmp = ht->array[i];

	}
	printf("}\n");
}
