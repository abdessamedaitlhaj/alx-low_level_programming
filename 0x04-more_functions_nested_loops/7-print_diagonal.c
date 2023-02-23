#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times
 *
 * Descritpion: Function that draws the diagonal
 * in the terminal
 * Return: Void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				if (i == j)
					_putchar(92);
				else
					_putchar(' ');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
