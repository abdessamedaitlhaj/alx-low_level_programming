#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the result code
 */
int _strcmp(char *s1, char *s2)
{
	char *p, *q;

	for (p = s1, q = s2; *p != '\0' || *q != '\0'; p++, q++)
	{
		if (*p > *q)
			return (*p - *q);
		else if (*p < *q)
			return (*p - *q);
		else
			return (*p - *q);
	}
}
