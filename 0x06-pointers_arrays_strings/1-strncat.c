#include "main.h"
/**
 * _strncat - concatenates two strings using n
 * @src: string to be added
 * @dest: destination string
 * @n: number of chars from src string
 *
 * Return: concatenation of src and dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p, *q;

	int length = 0;

	for (p = src; *p != '\0'; p++, length++)
	{}

	for (p = dest; ; p++)
	{
		if (*p == '\0')
		{
			if (n > length)
				for (q = src; *q != '\0'; q++)
				{
					*p = *q;
					p++;
				}
			else
				for (q = src; n > 0; q++)
				{
					*p = *q;
					p++;
					n--;
				}

			*p = '\0';
			break;
		}
	}
	return (dest);
}
