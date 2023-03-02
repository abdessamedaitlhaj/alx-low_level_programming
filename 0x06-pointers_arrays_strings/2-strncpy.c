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
	char *p, *q;

	int length = 0;

	for (q = src; *q != '\0'; q++, length++)
	{}

	if (n > length)
		for (q = src, p = dest; *q != '\0'; p++, q++)
		{
			if (*p == '\0')
				break;
			*p = *q;
		}
	else
		for (q = src, p = dest; n > 0 && *p != '\0'; p++, q++)
		{
			*p = *q;
			n--;
		}
	return (dest);
}
