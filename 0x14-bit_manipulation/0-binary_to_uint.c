#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containing a binary number.
 *
 * Return: the converted number. 0 otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	int len, a, i, j;
	unsigned int binary, sum;

	sum = 0;
	if (!b)
		return (0);
	i = 0;
	len = 0;
	while (b[i])
	{
		len++;
		i++;
	}
	a = len;
	for (i = 0; i < len; i++)
	{
		if ((b[i] >= 65 && b[i] <= 90) || (b[i] >= 97 && b[i] <= 122))
			return (0);
		if (b[i] == '1')
		{
			binary = 1;
			for (j = 1; j < a; j++)
				binary *= 2;
			sum += binary;
		}
		a--;
	}
	return (sum);
}
