#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to check
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0, i = 0;

	while (str[i] != '\0')
	{
		length++;
		p++;
	}
	if (length % 2 != 0)
		for (i = (length - 1) / 2; i < length; i++)
			_putchar(str[i]);
	else
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	_putchar('\n');
}
