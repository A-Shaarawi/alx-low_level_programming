#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function
 * @b: parameter
 * Return: number
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
