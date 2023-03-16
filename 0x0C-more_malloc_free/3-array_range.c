#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: first value of the array.
 * @max: last value of the array.
 *
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *tab, i;

	if (min > max)
		return (NULL);

	tab = malloc(sizeof(int) * (max - min + 1));
	if (!tab)
		return (NULL);

	for (i = 0; min <= max; i++)
		tab[i] = min++;
	return (tab);
}
