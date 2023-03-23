#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of args.
 * @...: any given args.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!separator && n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(args, char *) == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", va_arg(args, char *));
		}
	}
	if (separator && n)
	{
		va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			if (va_arg(args, char *) == NULL)
			{
				printf("(nil)%s", separator);
				continue;
			}
			printf("%s%s", va_arg(args, char *), separator);
		}
		if (va_arg(args, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));
	}
	va_end(args);
	printf("\n");
}
