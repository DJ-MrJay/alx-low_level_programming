#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array.
 * @grid: The 2D array to be freed.
 * @height: The height dimension of the grid.
 * Description: This function deallocates the memory used by a 2D array.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int i;

    /* Free memory for each row in the grid */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free memory for the array of pointers (rows) */
    free(grid);
}
