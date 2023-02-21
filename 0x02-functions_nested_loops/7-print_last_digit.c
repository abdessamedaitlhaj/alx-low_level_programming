#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: Given number
 *
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;
	_putchar(n % 10 + 48);
	return (n % 10);
}
