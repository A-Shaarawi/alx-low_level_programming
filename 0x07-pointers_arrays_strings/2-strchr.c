#include <stdio.h>
#include "main.h"

/**
 * _strchr - function
 * @s: parameter
 * @c: parameter
 * Return: number
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
