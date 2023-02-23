#include "main.h"
/**
 * print_square - Prints a square in the terminal
 * @size: The size of the square
 *
 * Description: Function that prints a square
 * in thr terminal
 * Return: Void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
}
