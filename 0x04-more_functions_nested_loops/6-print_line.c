#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of underscore to print
 *
 * Description: Function that draws straigth line
 * in the terminal
 * Return: Void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
