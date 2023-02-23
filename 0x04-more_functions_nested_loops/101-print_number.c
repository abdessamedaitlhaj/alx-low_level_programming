#include "main.h"
/**
 * print_number - P prints an integer using putchar
 * @n: The interger to print
 *
 * Description: Function that print any integer
 * using only putchar
 * Return: Void
 */
void print_number(int n)
{
	int i, division, s = 1, size = 0;

	division = n;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (division)
		{
			division = division / 10;
			size++;
		}

		division = n;

		for (i = 0; i < size - 1; i++)
			s *= 10;

		for (i = 0 ; i < size; i++)
		{
			division = n / s;

			if (i == 0)
			{
				_putchar(division + '0');
				s /= 10;
				continue;
			}
			_putchar((division % 10) + '0');
			s /= 10;
		}
		_putchar('\n');
	}
}
