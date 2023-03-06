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
	int i;

	for ( ; *s != '\0'; s++)
		if (*s == c)
			return (s);
	return (NULL);
}
