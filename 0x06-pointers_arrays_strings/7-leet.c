#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string to be transformed
 *
 * Return: transformed string
 */
char *leet(char *s)
{
	char *p, t[] = "aeotl43071";

	int i;

	for (p = s; *p != '\0'; p++)
	{
		for (i = 0; i < 5; i++)
			if (*p == t[i] || *p == (t[i] - 32))
				*p = t[i + 5];
	}
	return (s);
}
