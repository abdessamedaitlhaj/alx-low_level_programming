#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number to be modified.
 * @index: index of the bet to set.
 *
 * Return: 1 on success. -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m <<= index;
	*n = *n | m;
	return (1);
}
