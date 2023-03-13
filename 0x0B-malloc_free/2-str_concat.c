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

	while (s[i])
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * set - copy string.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: void
 */
void set(char *s1, char *s2)
{
	i = 0;
	while (*s2)
	{
		s1[i] = *s2;
		s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
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
	char *tmp1, *tmp2;
	int i;

	s1s2 = malloc(sizeof(char) * (len(s1) + len(s2) - 1));

	if (s1s2 == NULL)
		return (NULL);

	if (s1 == NULL && s2)
	{
		set(s1s2, s2);
		return (s1s2);
	}
	if (s2 == NULL && s1)
	{
		set(s1s2, s1);
		return (s1s2);
	}
	i = 0;
	while (*s1)
	{
		s1s2[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		s1s2[i - 1] = *s2;
		s2++;
		i++;
	}
	s1s2[i] = '\0';
	return (s1s2);
}
