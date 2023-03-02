#include "main.h"
/**
 * string_toupper - change letters of a string to uppercase
 * @s: string to be transformed
 *
 * Return: final string transformed
 */
char *string_toupper(char *s)
{
	char *p;

	for (p = s; *p < '\0'; p++)
	{
		if (*p >= 97 && *p <= 122)
		{
			*p = *p - 32;
		}
	}
	return (s);
}
