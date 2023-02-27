#include "main.h"
/**
 * _strcpy - copy string
 * @src: source string
 * @dest: destination string
 *
 * Return: pointer to string
 */
char *_strcpy(char *dest, char *src)
{
	char *p, *q;

	p = src;
	q = dest;
	while (*p != '\0')
	{
		*q = *p;
		p++;
		q++;
	}
	*q = '\0';
	return (dest);
}
