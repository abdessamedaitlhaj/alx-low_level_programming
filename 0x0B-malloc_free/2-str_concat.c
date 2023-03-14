#include<stdlib.h>
#include "main.h"

/**
 * len - length of a string.
 * @s: string;
 *
 * Return: the length of a string.
 */

int len(char *s)
{
	int i = 0, length;
	if (s == NULL || s[0] == '\0')
		return (0);
	while (s[i])
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * set - copy string.
 * @a: first string.
 * @b: second string.
 * @j: where set start assignment.
 *
 * Return: void
 */
char *set(char *a, char *b, int j)
{
	int i;

	i = 0;
	while (b[i])
	{
		a[j] = b[i];
		i++;
		j++;
	}
	return (a);
}
/**
 * str_concat - concatenate rwo strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the concatenated string. NULL otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	char *s1s2;

	s1s2 = (char *) malloc(sizeof(char) * (len(s1) + len(s2) + 1));

	if (s1s2 == NULL)
		return (NULL);
	if (s1 && s2)
	{
		s1s2 = set(s1s2, s1, 0);
	    s1s2 = set(s1s2, s2, len(s1));
	    *(s1s2 + len(s1) + len(s2)) = '\0';
	}
	else if (s1 && s2 == NULL)
	{
		s1s2 = set(s1s2, s1, 0);
	    *(s1s2 + len(s1)) = '\0';
	}
	else if (s2 && s1 == NULL)
	{
		s1s2 = set(s1s2, s2, 0);
		*(s1s2 + len(s2)) = '\0';
	}
	else
		return (NULL);


	return (s1s2);
}
