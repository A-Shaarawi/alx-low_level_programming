#include "main.h"
#include <stdio.h>

/**
 * _puts - funtion
 * @str: parameter
 * Return: number
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');

}
