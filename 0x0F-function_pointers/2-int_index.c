#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array and returns its index.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function that checks the comparison condition.
 *
 * Return: The index of the first element for which cmp doesn't return 0.
 *         -1 if no element matches or if size is non-positive.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (int i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
