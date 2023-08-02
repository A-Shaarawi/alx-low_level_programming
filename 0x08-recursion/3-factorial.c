#include <stdio.h>
#include "main.h"

/**
 * factorial - function
 * @n: parameter
 * Return: number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
