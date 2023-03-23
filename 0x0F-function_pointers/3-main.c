#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that performs simple operations.
 * @argc: number of aruments.
 * @argv: the argument passed in the command.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char c;
	int a, b;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = *argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (c != '/' || c != '+' || c != '*' || c != '%' || c != '-')
	{
		printf("Error\n");
		exit(99);
	}
	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	printf("%d\n", ptr(a, b));
	return (0);
}
