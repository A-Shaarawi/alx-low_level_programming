#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	char *x, *separator = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					x = va_arg(list, char *);
					if (x == NULL)
						x = "(nil)";
					printf("%s%s", separator, x);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
