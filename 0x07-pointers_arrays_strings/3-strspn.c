#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string
 *
 * Return: length of the initial segement of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0, b = 0, *p = &b;

	for (i = 0; s[i] != '\0'; i++)
	{
		*p = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				*p = 1;
				break;
			}
		}
		if (b)
			counter++;
		else
			return (counter);
	}
	return (counter);
}
