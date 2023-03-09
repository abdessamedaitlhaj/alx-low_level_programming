#include "main.h"

/**
 * find - return the squre root of a number.
 * @n: natural number.
 * @i: finder.
 *
 * Return: the squre root number. -1 otherwise.
 */
int find(int n, int i)
{
	if (i >= n / 2)
		return (-1);
	return (i * i == n ? i : find(n, ++i));

}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be processed
 *
 * Return: natural square root of n. -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (find(m, 2));
}
