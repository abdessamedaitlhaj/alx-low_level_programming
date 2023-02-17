#include<stdio.h>
/**
 * main - Print numbers of base 16
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	if (i == 57)
		for (i = 97; i < 103; i++)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
