#include "main.h"
#include <stdio.h>

/**
 * rev_string - funtion
 * @s: parameter
 * Return: number
 */

void rev_string(char *s)
{
	char temp = s[0];

	int count = 0;

	int i;

	i = 0;
	while (s[count] != '\0')
	{
			count++;
	}
			while (i < count)
			{
				count--;
				temp = s[i];
				s[i] = s[count];
				s[count] = temp;
				i++;
			}
}
