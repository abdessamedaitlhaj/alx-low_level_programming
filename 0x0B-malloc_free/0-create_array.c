#include<stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array.
 * @c: initialized character.
 *
 * Return: pointer to the array. NULL if size is zero or fails.
 */
char *create_array(unsigned int size, char c)
{
	char *tmp, *ar;

	if (size)
	{
		ar = malloc(sizeof(char) * size);
		if (ar == NULL)
			return (NULL);
		tmp = ar;
		while (*ar)
		{
			*ar = c;
			ar++;
		}
		return (tmp);
	}
	else
		return (NULL);
}
