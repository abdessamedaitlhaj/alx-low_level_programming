#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: the array
 * @n: elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p, *q, tmp;

	for (p = a, q = a + n - 1; p < q; p++, q--)
	{
		tmp = *p;
		*p = *q;
		*q = tmp;
	}
}
