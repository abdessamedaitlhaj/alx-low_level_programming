#include "main.h"

/**
 * print_number - prints any given integer
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	int i, division, s = 1, size = 0;

	division = n;

	if (n < 0)
	{
		putchar(45);
		n = -1 * n;
	}
	if (n == 0)
	putchar('0');
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
				putchar(division + '0');
				s /= 10;
				continue;
			}
			putchar((division % 10) + '0');
			s /= 10;
	}
	putchar('\n');
	}
}
