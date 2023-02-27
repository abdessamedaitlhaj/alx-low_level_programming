#include "main.h"
/**
 * print_array - print n element of an array
 * @a: array
 * @n: number of elemnts to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
        int i, *p;

	for (p = a; p < a + n; p++)
		_putchar(*p);
	_putchar('\n');
}
