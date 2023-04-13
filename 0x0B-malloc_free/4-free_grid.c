#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a func that frees a 2-dimensional grid of ints
 * @grid: pointer to grid
 * @height: height of grid
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
