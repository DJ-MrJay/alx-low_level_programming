#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to be processed.
 * @size: The number of elements in the array.
 * @action: A pointer to a function to apply on each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
