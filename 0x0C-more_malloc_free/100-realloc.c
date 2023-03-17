#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the previously allocated memory.
 * @old_size: the old size of the ptr
 * @new_size: the new size of the new memory block.
 *
 * Return: pointer to the reallocated memory block. NULL otherwise.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)

	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)(ptr + i));
		free(ptr);
		return (new_ptr);
	}
	if (new_size < old_size)
	{
		for (i = old_size; i > new_size; i-- 
			free((char *)(ptr + i));
		return (ptr);
	}
}
