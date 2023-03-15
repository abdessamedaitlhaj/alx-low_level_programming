#include<stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: number of arguments.
 * @av: pointer to pointer to a 2d array of chars
 *
 * Return: pointer to combined string into one. NULL otherwise.
 */
char *argstostr(int ac, char **av)
{
	char *new_av;
	int i, j, len = 0, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
	}

	new_av = malloc(sizeof(char) * len);

	l = 0;

	for (i = 1; i < iac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			new_av[l] = av[i][j];
			j++;
			l++;
		}
		new_av[l] = '\n';
		l++;
	}
	new_av[l] = '\0';
	return (new_av);
}
