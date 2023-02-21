#include "main.h"
/**
 * print_alphabet - Function that print alphabets
 */
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar(i + 'a');
		i++;
	}
	_putchar('\n');
}
