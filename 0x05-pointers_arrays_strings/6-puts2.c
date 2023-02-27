#include "main.h"
/**
 * puts2 - print odd of a string
 * @str: string to check
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
}
