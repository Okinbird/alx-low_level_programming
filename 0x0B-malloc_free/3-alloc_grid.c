#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimentional array of integers.
 *              Each element of the grid initialized to 0.
 * @width:  The width of the 2 dimentional array.
 * @height:  The height of the 2 dimentional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL
 *         Otherwise - A pointer to the 2 dimentional array of integers
 */
int **alloc_grid(int width, int height)
{
int **g;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
g = (int **)malloc(sizeof(int *) * height);
if (g == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
g[i] = (int *)malloc(sizeof(int) * width);
if (g[i] == NULL)
{
for (j = 0; j < i; j++)
free(g[j]);
free(g);
return (NULL);
}
for (j = 0; j < width; j++)
{
g[i][j] = 0;
}
}
return (g);
}
