#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum range of values (inclusive)
 * @max: Maximum range of values (inclusive)
 *
 * Return: Pointer to the new array, or NULL on failure or invalid input
 */
int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL); /* Memory allocation failed */

for (i = 0; i < size; i++, min++)
{
ptr[i] = min;
}

return (ptr);
}
