#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - funtion
 * @dest: parameter
 * @sec: parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (j < i)
	{
		 dest[j] = src[j];
		 j++;
	}
	dest[i] = 0;
	return (dest);
}
