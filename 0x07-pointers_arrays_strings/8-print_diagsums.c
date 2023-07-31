#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i, n, sum1 = 0, sum2 = 0;

for (i = 0; i < size * size; i += size + 1)
sum1 += a[i];

for (n = size - 1; n < size * size - (size - 1); n += size - 1)
sum2 += a[n];

printf("%d, %d\n", sum1, sum2);
}
