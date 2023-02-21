#include "main.h"
/**
 * _isalpha - Check for alphabet of a character
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabtic. 0 otherwise
 */
int _isalpha(int c)
{
	char c1, c2;

	for (c1 = 'a', c2 = 'A'; c1 <= 'z', c2 <= 'Z'; c1++, c2++)
	{
		if (c == c1 || c == c2)
			return (1);
	}
	return (0);
}
