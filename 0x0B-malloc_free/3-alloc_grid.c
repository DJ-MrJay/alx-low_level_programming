#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: A pointer to the allocated 2D array, or NULL if memory allocation fails.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int x, y;

/* Check if width or height is non-positive */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the array of pointers (rows) */
grid = (int **)malloc(sizeof(int *) * height);

/* Check if memory allocation was successful */
if (grid == NULL)
return (NULL);

/* Allocate memory for each row (array of integers) */
for (x = 0; x < height; x++)
{
grid[x] = (int *)malloc(sizeof(int) * width);

/* If memory allocation for a row fails, free previously */
/* allocated memory and return NULL */
if (grid[x] == NULL)
{
for (; x >= 0; x--)
free(grid[x]);
free(grid);
return (NULL);
}
}

/* Initialize all elements of the grid to 0 */
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
grid[x][y] = 0;
}

return (grid);
}
