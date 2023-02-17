#include <stdio.h>
/**
 * main - Print a message to the standart error
 * Return: 1 (Sucess)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19", stderr);
	fprintf(stdout, "\n");
	return (1);
}
