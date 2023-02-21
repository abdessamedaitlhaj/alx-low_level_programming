#include "main.h"
/**
 * _islower - Check if a character is lowercase or not
 * @c: The character to be checked
 *
 * Return: 1 if is lowercase. 0 otherwise
 */
int _islower(int c)
{
	char c0;

	for (c0 = 'a'; c0 < 'z'; c0++)
		if (c == c0)
		{
			return (1);
		}
	return (0);
}
