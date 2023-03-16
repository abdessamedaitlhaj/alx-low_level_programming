#include <sdtlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of an array.
 * @size: size of data type.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if(!p)
		return (NULL);
	while (i < nmemb)
	{
		*(p + i) = 0;
		i++;
	}
	return (p);
}
