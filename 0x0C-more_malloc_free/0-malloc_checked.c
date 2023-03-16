#include <stdlib.h>
#include "main.h"
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: amount of memory.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
