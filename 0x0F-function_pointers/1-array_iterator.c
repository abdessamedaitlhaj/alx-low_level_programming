#include "function_pointers.h"
/**
 * array_iterator - execute any given function on each array elem.
 * @array: the array.
 * @size: the array size.
 * @action: funtion to be executed.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
