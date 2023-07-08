#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key
 * @size: the table size
 *
 * Return: the index of where key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
