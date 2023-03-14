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
 * set - set a string.
 * @a: first string.
 * @b: second string.
 *
 * Return: pointer to modified string.
 */
char *set(char *a, char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		a[i] = b[i];
		i++;
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
	char *s;
	int i;

	if ((s1 == NULL || s1[0] == '\0') && s2)
	{
		s = malloc(sizeof(char) * (len(s2) + 1));
		if (s == NULL)
			return (NULL);
		s = set(s, s2);
		s[len(s2)] = '\0';
	}
	else if ((s2 == NULL || s2[0] == '\0') && s1)
	{
		s = malloc(sizeof(char) * (len(s1) + 1));
		if (s == NULL)
			return (NULL);
		s = set(s, s1);
		s[len(s1)] = '\0';
	}
	else if (s2 && s1)
	{
		s = malloc(sizeof(char) * (len(s1) + len(s2) + 1));
		if (s == NULL)
			return (NULL);
		s = set(s, s1);
		i = 0;
		while (s2[i])
		{
			(s + len(s1))[i] = s2[i];
			i++;
		}
		s = set(s + len(s1), s2);
		s[len(s1) + len(s2)] = '\0';
	}
	else
		s[0] = '\0';

	return (s);
}
