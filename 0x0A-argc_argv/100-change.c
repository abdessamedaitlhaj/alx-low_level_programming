#include<stdio.h>
#include<stdlib.h>

/**
 * main - print a program's name
 * @argc: number of argument passed command line
 * @argv: an array of strings
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int number, min = 0, a, b, c;

	number = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	if (number >= 25)
	{
		a = number % 25;
		min = number / 25 + a / 10 + (a % 10) / 5 + ((a % 10) % 5) / 2;
		min += (((number % 25) % 10) % 5) % 2;
	}
	else if (number >= 10 && number < 25)
	{
		b = number % 10;
		min = number / 10 + b / 5 + (b % 5) / 2 + (b % 5) % 2;
	}
	else if (number >= 5 && number < 10)
	{
		c = number % 5;
		min = number / 5 + c / 2 + (c % 5) % 2;
	}
	else if (number >= 2 && number  < 5)
		min = number / 2 + number % 2;
	else
		min = 1;
	printf("%d\n", min);
	return (0);
}
