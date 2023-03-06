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
	int i, j;
	unsigned int counter = 0;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			j++;
		}
	}
	return (counter);
}
