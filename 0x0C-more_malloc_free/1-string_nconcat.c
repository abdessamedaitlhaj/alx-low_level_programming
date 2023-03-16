#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: first n bbytes of s2.
 *
 * Return: pointer to the new string. NULL otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1 = 0, len2 = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	for (i = 0; s1[i]; ++len1, i++)
	{}
	
	for (i = 0; s2[i]; ++len2, i++)
	{}

	for (i = 0; i < len1; i++)	
		new[i] = s1[i];

	if (n >= len2)
		for (j = 0; j < len2; j++, i++)
			new[i] = s2[j];
	else
		for (j = 0; j < n; j++, i++)
			new[i] = s2[j];
	new[i] = '\0';
	return (new);
}

