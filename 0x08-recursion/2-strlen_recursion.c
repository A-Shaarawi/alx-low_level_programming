#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: parameter
 * Return: number
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
