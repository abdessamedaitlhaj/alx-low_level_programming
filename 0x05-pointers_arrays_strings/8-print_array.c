#include "main.h"
#include<stdio.h>
/**
 * print_array - print n element of an array
 * @a: array
 * @n: number of elemnts to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int *p;

	p = a;
	printf("%d", *p);

	for (p = a + 1; p < a + n; p++)
		printf(", %d", *p);
	_putchar('\n');
}
