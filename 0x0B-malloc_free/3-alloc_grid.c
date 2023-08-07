#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - function
 * @width: parameter
 * @height: parameter
 * Return: number
 */

int **alloc_grid(int width, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(width[i]);
	}
	free(width);
}

