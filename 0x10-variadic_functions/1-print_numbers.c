#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of args.
 * @...: any given args.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!separator && n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
	}
	if (separator && n)
	{
		va_start(args, n);
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(args, int), separator);
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
