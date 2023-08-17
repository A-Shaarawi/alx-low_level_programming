#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function
 * @separator: parameter
 * @n: parameter
 * Return: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;

	unsigned int i;

	va_list args;

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, unsigned int);
			printf("%d", x);
		}
	}
	if (separator == NULL)
	{
		x = va_arg(args, unsigned int);
		if (i < n - 1)
			printf("%d%s", x, separator);
		else if (i == n - 1)
			printf("%d", x);
	}
	va_end(args);
}

