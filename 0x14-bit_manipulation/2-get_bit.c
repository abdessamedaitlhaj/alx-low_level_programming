#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer to be treated.
 * @index: index of the bit.
 *
 * Return: the bit at index inedx. -1 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
