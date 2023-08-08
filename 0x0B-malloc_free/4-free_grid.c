#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid - a function that frees a 2 dimensional grid
 *@grid: the address of the 2D grid
 *@height: height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
