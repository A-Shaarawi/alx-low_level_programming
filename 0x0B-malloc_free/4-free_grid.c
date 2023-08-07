#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - function
 * @grid: parameter
 * @height: parameter
 * Return: number
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
