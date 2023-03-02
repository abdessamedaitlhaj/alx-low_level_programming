#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: the string to be transformed
 *
 * Return: the transformed string
 */
char *cap_string(char *s)
{
	char *p;

	for (p = s; *p != '\0'; p++)
	{
		if (*p == ' ')
		{
			if (*(p + 1 ) <= 90 && *(p + 1) >= 65)
				continue;
			*(p + 1) = *p - 32;
		}
	}
	return (s);
}
