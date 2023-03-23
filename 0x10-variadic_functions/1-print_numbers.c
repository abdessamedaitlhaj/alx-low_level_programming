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

	va_start(args, n);
	if (!separator && n)
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
	if (separator && n)
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(args, int), separator);
	va_end(args);
	printf("\n");
}
