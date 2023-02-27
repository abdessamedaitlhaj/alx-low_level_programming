#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: string to check
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int *p, *q, i = 0, length = 0;

	char c;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	for (p = s, q = s + length - 1; p < q; p++, q--)
	{
		c = *p;
		*p = *q;
		*q = c;
	}
	_putchar('\n');
}
