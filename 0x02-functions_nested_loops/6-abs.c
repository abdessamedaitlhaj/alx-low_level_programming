#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: The number to be checked
 *
 * Return: the absolue value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar('\n');
		return (n);
	}
	else
	{
		_putchar('\n');
		return (-n);
	}
}
