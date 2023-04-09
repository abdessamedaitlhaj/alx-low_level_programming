#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number to flip.
 * @m: desired number to get.
 *
 * Return: number of bit to jump into this number. 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c, bin = 1;
	unsigned int len = 0;

	c = n ^ m;
	while (bin <= c)
	{
		if (c & bin)
			len++;
		bin <<= 1;
	}
	return (len);
}
