#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: string to check
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0, length = 0;

	char *p, *q, c;

	p = s;
	while (*p != '\0')
	{
		length++;
		p++;
	}
	for (p = s, q = s + length - 1; p < q; p++, q--)
	{
		c = *p;
		*p = *q;
	        *q = c;
	}
	_putchar('\n');
}
