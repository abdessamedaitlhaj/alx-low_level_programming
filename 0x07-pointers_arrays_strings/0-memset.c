#include "main.h"

/**
 * _memset - fills memory with a constant
 * @s: string to fill
 * @b: canstant to use
 * @n: first n bytes to fill
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	if (n > 0)
		while (i < n && s[i])
	{
		s[i] = b;
		i++;
	}
	return (s);
}
