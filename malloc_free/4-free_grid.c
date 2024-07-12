#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - code
 * @grid: grid
 * @height: height
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || height <= 0)
		return;
	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
