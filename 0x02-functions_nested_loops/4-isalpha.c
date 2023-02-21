#include "main.h"
/**
 * _isalpha - Check for alphabet of a character
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabtic. 0 otherwise
 */
int _isalpha(int c)
{

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
