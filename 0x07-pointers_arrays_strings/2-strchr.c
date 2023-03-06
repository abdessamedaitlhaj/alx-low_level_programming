#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character
 *
 * Return: a pointer to the first occurance of that c
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = s;
	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (*p == c)
		return (p);
	return ('\0');
}
