#include "main.h"
/**
 * puts2 - print even of a string
 * @str: string to check
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	
	char *p;

	p = str;
	while (*p != '\0')
	{
		_putchar(*p);
		p += 2;
	}
	_putchar('\n');
}
