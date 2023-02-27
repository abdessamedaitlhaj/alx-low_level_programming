#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to check
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length, i;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
