#include <stdio.h>
/**
 * main - Fibonacci sequence
 * Return: 0 Always
 */
int main(void)
{
	int a = 1, b = 2, c, sum = 2;

	while (b <= 4000000)
	{
	c = a + b;
	if (c % 2 == 0)
	{
		sum += c;
	}
	a = b;
	b = c;
	}
	printf("%d\n", sum);
	return (0);
}
