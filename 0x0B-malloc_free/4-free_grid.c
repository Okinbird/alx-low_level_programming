#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimentional grid previously
 *             created by alloc_grid function
 * @grid:  The 2 dimentional array of integers to be freed
 * @height:  The height of grid.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
