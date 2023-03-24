#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * @...: any given args.
 *
 * Return: nothign.
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char c;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				if (va_arg(args, char *) == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(args, char *));
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			default:
				break;
		}
		if (format[i + 1] && (c == 'c' || c == 's' || c == 'i' || c == 'f'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
