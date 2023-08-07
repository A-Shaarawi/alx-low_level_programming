#include <stdlib.h>
#include "main.h"

/**
 * create_array - function
 * @size: parameter
 * @c: parameter
 * Return: number
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
