#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function
 * @str: parameter
 * Return: number
 */

char *_strdup(char *str)
{
	char *new;

	int i = 0;

	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;
	i = i + 1;
	new = malloc(sizeof(char) * i);
	if (new == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		new[j] = str[j];
	return (new);
}
