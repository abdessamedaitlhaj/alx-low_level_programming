#include "main.h"
/**
 * more_numbers - Print numbers from 0-14
 *
 * Description: Function that prints
 * numbers from 0 to 14
 * Return: Void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 1; i++)
		for (j = 0; j <= 14; j++)
		{
			if (i == 1)
				_putchar('1');
			_putchar(j + '0');
			if ((j == 4 && i == 1) || (j == 9 && i == 0))
				break;
		}
	_putchar('\n');
}
