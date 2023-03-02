#include "main.h"
/**
 * _strncpy - copies a string
 * @src: the string to be copied
 * @dest: destination string
 * @n: number of letters to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; n; i++, n--)
	{
		if (i < n && dest[i])
			dest[i] = src[i];
	}
	return (dest);
}
