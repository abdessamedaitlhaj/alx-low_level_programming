#include "main.h"
/**
 * _strlen - length of a string
 * @s: string to check
 *
 * Return: the length of astring
 */
int _strlen(char *s)
{
	int length, i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
