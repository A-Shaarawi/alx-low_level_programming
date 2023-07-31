#include <stdio.h>
#include "main.h"

/**
 * _strcat - function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: number
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
