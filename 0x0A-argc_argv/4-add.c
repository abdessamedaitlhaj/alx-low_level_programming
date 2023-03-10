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
	int i, sum;

	sum = 0;
	if (argc  == 1)
		printf("%d\n", 0);
	else
		for (i = 1; i < argc; i++)
			if (atoi(argv[i]))
				sum = sume + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
	printf("%d\n", sum);
	return (0);
}
