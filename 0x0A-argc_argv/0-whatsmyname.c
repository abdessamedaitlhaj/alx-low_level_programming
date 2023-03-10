#include<stdio.h>
#include<string.h>
/**
 * main - print a program's name
 * @argc: number of argument passed command line
 * @argv: an array of strings
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < strlen(argv[0]); i++)
		_putchar(argv[0][i]);
	_putchar('\n');
}
