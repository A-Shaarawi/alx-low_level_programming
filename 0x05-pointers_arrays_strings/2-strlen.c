#include "main.h"
#include <stdio.h>

/**
 * _strlen - funtion
 * @s: parameter
 * Return: number
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
