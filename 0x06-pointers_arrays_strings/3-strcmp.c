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

	p = s1;
	q = s2;
	while (*p || *q)
	{
		if (*p > *q)
			return (*p - *q);
		else if (*p < *q)
			return (*p - *q);
		else
			return (*p - *q);
		p++; q++;
	}
}
