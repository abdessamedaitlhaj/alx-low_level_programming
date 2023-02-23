#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: void
 */
void print_number(int n)
{
	unsigned int m, d, ct;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	ct = 1;

	while (d > 9)
	{
		d /= 10;
		ct *= 10;
	}

	for (; ct >= 1; ct /= 10)
	{
		_putchar(((m / ct) % 10) + 48);
	}
}
