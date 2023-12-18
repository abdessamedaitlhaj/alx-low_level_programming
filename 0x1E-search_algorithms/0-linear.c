#include "search_algos.h"

/**
 * linear_search - use linear search algorithm in array of integers
 * @array: array of integers
 * @size: the array size
 * @value: value to find
 *
 * Return: the index of the value searched
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
