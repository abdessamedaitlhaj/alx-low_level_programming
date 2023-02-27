#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: first number
 * @b: second number
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
