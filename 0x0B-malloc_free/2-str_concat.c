#include<stdlib.h>
#include "main.h"

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
	int len1, len2, i;

	tmp1 = s1;
	tmp2 = s2;
	while (*tmp1)
	{
		len1++;
		tmp1++;
	}
	while (*tmp2)
	{
		len2++;
		tmp2++;
	}
	s1s2 = malloc(sizeof(char) * (len1 + len2 - 1));

	if (s1s2 == NULL)
		return (NULL);
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
