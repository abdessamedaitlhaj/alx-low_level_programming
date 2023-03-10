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
	int i, result = 1, number;
	int n1 = strtol(argv[argc - 2], NULL, 10);
	int n2 = strtol(argv[argc - 1], NULL, 10);
	
	if (argc == 3)
		printf("%d\n", n1 * n2);
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
