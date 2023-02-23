#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: The character to be checked
 *
 * Description: Function that checks for uppercase of a character
 * Return: 1 if the character is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
