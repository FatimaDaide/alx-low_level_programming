#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees a 2 dimensional grid
  * @grid: grid
  * @height: integer
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
