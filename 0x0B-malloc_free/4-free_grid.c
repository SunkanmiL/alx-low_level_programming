#include "main.h"
#include <stdio.h>
#include <stdlib.H>
/**
 * free_grid - function that frees 2dim grid previously created
 * @grid: address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
