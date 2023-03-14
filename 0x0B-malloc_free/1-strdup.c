#include<stdlib.h>
#include "main.h"

/**
 * _strdu - return a pointer to the new string.
 * @str: old string.
 *
 * Return: pointer to the newest one. NULL otherwise.
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; ++len)
	{}

	new_str = (char *)malloc(sizeof(char) * len);

	if (!new_str)
		return (NULL);

	new_str = str;

	return (new_str);
}
