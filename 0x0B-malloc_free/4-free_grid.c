#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 * @grid: grid to free (2 dimensional array).
 * @height: height of the grid (number of rows).
 * Return: void (no return).
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
