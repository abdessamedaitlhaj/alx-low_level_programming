#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments.
 * @...: any guven arguments.
 *
 * Return: sum of all the arguments. 0 otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, s = 0;
	va_list args;
	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
