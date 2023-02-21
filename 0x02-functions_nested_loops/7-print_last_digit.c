#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: Given number
 *
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
	int tmp;

	if (n < 0)
		tmp = -1 * n;
	if (n >= 0)
		tmp = n;
	return (tmp % 10);
}
