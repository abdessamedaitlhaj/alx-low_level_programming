#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	int j = 0;

	while (i < 10)
	{
		while (j < 26)
		{
			_putchar(j + 'a');
			j++;
		}
	j = 0;
	i++;
	_putchar('\n');
	}
}
