#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: string to be added
 * @dest: destination string
 *
 * Return: concatenation of src and dest
 */
char *_strcat(char *dest, char *src)
{
	char *p, *q;

	for (p = dest; ; p++)
	{
		if (*p == '\0')
		{
			for (q = src; *q != '\0'; q++)
			{
				*p = *q;
				p++;
			}
			*p = '\0';
			break;
		}
	}

	return (dest);
}
