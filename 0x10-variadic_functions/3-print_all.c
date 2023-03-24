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
	unsigned int i = 0, j = 0;
	va_list args;
	char c, *str;

	va_start(args, format);
	while (format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				while (1)
				{
					if (!str[j])
						break;
					putchar(str[j++]);
				}
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
