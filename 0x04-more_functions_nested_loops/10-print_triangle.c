#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 *
 * Description: Function that prints a triangle
 * in the terminal
 * Return: Void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(' ');
			for (k = size - 1; k >= j; k--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
