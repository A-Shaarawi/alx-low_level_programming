#include "main.h"
#include <stdio.h>

/**
 * puts2 - funtion
 * @str: parameter
 * Return: number
 */

void puts2(char *str)
{
	char *r = str;

	int count = 0;

	int i = 0;

	while (*r != '\0')
	{
		r++;
		count++;
	}
	while (i < count)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
