#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function
 * @s1: parameter
 * @s2: parameter
 * Return: number
 */

char *str_concat(char *s1, char *s2)
{
	char *connect;

	int i1;

	int i2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i1 = i2 = 0;
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	connect = malloc(sizeof(char) * (i1 + i2 + 1));
	if (connect == NULL)
		return (NULL);
	i1 = i2 = 0;
	while (s1[i1] != '\0')
	{
		connect[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		connect[i1] = s2[i2];
		i2++;
		i1++;
	}
	connect[i1] = '\0';
	return (connect);
}
