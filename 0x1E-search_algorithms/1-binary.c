#include "search_algos.h"

/**
 * binary_search - use binary search algo in a sorted array
 * @array: the array
 * @size: teh array size
 * @value: the value to be searched
 *
 * Return: the index of the value searched. -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, middle, end, i;

	if (!array)
		return (-1);

	start = 0;
	end  = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		middle = (start + end) / 2;

		if (value < array[middle])
			end = middle - 1;
		else if (value > array[middle])
			start = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
