#include <stdio.h>
#include "main.h"

/**
 * _memset - function
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: number
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n < 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
