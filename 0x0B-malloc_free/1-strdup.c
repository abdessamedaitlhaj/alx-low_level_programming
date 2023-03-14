#include<stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to the new string.
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

	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}

	new_str = (char *)malloc(sizeof(char) * (len + 1));

	if (!new_str)
		return (NULL);


	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
