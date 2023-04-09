#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: nothing.
 */
int get_endianness(void)
{
	int a = 1;

	char *addr;

	addr = (char *)&a;

	if (addr)
		return (1);

	return (0);
}
