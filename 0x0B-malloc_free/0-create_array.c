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
	char *ar;
	int i = 0;

	if (size)
	{
		ar = (char *)malloc(sizeof(char) * size);
		if (ar == NULL)
			return (NULL);
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
		ar[i] = '\0';
		return (ar);
	}
	else
		return (NULL);
}
