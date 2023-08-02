#include <stdio.h>
#include "main.h"

int square(int n, int i);

/**
 * _sqrt_recursion - function
 * @n: parameter
 * Return: number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else
	{
		return (square(n, 0));
	}
}
/**
 * square - function
 * @n: parameter
 * @i: parameter
 * Return: number
 */
int square(int n, int i)
{
	if (i * i > n)
	{
	return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (square(n, i + 1));
	}
}
