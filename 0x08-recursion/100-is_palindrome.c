#include "main.h"

/**
 * len - length of string
 * @s: string
 *
 * Return: length
 */
int len(char *s)
{
	if (*s)
		return (1 + len(++s));
	else
		return (0);
}

/**
 * pal - is string palindrome or not
 * @s: string
 * @i: counter
 *
 * Return: 1 if pal. 0 otherwise
 */
int pal(char *s, int i)
{
	int l;
	char *start;
	char *end;

	l = len(s);
	start = s;
	end = s + l - 1 - i;

	if (i >= l / 2 && *start == *end)
		return (1);
	if (*start  == *end && start <= end)
		return (pal(s + 1, ++i));
	else
		return (0);
}

/**
 * is_palindrome - string is a palindrome or not.
 * @s: string to be checked.
 *
 * Return: 1 if it is a palindrome. 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal(s, 0));
}
