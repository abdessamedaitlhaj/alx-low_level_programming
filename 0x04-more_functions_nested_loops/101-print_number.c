#include "main.h"

/**
 * print_number - Prints an integer using putchar
 * @n: The interger to print
 *
 * Description: Function that print anygiven  integer
 * Return: Void
 */
void print_number(int n)
{
	int d;

	d = n;
	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}

	if (d / 10)
		print_number(d / 10);
	_putchar((d % 10) + '0');
}
