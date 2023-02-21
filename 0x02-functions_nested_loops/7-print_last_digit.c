#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: Given number
 *
 * Return: Last digit of a number
 */
int print_last_digit(int n)
{
	int tmp;

	if (n < 0)
		n = -1 * n;
	tmp = n % 10;
	_putchar(tmp + 48);
	return (tmp);
}
