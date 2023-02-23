#include "main.h"

/**
 * print_number - prints any given integer
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	int d;

	d = n;
	if (n < 0)
	{
		putchar('-');
		d = -n;
	}
	if (d / 10)
		print_number(d / 10);
	putchar((d % 10) + '0');
}
