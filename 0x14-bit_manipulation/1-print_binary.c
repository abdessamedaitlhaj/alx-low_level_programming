#include "main.h"

/**
 * print_binary - function that convert an unsigned int to a binary.
 * @n: unsigned integer number.
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar(1 + '0');
	else
		_putchar('0');
}
