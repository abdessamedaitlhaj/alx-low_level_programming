#include<stdio.h>
/**
 * main - Print alphabet in reverse
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
