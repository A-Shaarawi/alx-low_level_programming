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

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
		}
	}
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
		x = va_arg(args, int);
		if (i < n - 1)
			printf("%d%s", x, separator);
		else if (i == n - 1)
			printf("%d", x);
		}
		printf("\n");
	}
	va_end(args);
}

