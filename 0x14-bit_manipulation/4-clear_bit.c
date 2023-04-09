#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to be treated.
 * @index: index of the bit to set.
 *
 * Return: 1 on success. -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	comp <<= index;
	*n = (~comp) & *n;
	return (1);
}
