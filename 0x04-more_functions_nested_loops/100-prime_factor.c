#include <stdio.h>

/**
 * main - Prints the largest prime factor.
 * Return: Always Sucess 0.
 */

int main(void)
{
	long int n, p;

	n = 612852475143;
	p = 2;
	while (p <= n)
	{
		if (n % p == 0)
		{
			n /= p;
			p--;
		}
		p++;
	}
	printf("%ld\n", p);
	return (0);
}
