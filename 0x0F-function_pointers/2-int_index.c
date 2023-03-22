#include "function_pointers.h"
/**
 * int_index - search for integer,.
 * @array: the array to used for searching.
 * @size: the array size.
 * @cmp: the function that compare the array elemets.
 *
 * Return: index of the first found element. -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
