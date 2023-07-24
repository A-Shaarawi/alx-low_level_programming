#include "main.h"
#include <stdio.h>

/**
 * swap_int - funtion
 * @a: parameter
 * @b: parameter
 * Return: number
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
