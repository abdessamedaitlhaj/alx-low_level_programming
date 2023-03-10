#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

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
	char *s;

	sum = 0;
	if (argc  == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			while(*s)
			if (!isdigit(*s++))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
