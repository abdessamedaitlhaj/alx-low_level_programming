#include<stdio.h>
/**
 * main - print a program's name
 * @argc: number of argument passed command line
 * @argv: an array of strings
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			result *= argv[i];
		printf("%d\n", result);
	}
	else
		printf("Error");
	return (0);

}
