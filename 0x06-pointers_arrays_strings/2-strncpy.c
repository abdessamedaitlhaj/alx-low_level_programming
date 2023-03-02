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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
