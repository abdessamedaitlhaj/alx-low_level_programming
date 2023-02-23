#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: Character to be checked
 *
 * Description: Function that checks if a character is a digit
 * Return: 1 if the character is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
