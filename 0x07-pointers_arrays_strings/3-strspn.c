#include <stdio.h>
#include "main.h"

/**
 * _strspn - function
 * @s: parameter
 * @accept: parameter
 * Return: number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	int i;

	while (*s)
	{
		for (i = 0; accept[i] > '\0'; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i+1] == '\0'
					return (n);
		}
		s++;
	}
	return n;
}
