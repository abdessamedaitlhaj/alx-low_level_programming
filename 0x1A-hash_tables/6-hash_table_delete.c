#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp1, *tmp2;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while (tmp1)
		{
			tmp2 = tmp1;
			tmp1->tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht);
}
