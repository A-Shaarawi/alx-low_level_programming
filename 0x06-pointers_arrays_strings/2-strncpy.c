#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: number
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
