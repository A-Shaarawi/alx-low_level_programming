#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function
 * @a: parameter
 * @n: parameter
 * Return: number
 */

void reverse_array(int *a, int n)
{
	int i;

	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

