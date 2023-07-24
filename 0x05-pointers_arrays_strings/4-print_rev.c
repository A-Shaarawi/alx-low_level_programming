#include "main.h"
#include <stdio.h>

/**
 * print_rev - funtion
 * @s: parameter
 * Return: number
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	while (count > 0)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');
}
