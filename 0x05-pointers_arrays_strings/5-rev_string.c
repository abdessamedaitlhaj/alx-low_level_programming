#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: string to check
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, length = 0;

	char c;

	i = 0;
	if (s[i] != '\0')
	{
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	}
	_putchar('\n');
}
