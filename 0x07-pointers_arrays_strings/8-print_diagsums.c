#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the square matrix.
 *
 */
void print_diagsums(int *a, int size)
{
int sum_main = 0;
int sum_secondary = 0;
int i;

/* Calculate the sum of the main diagonal and the secondary diagonal */
for (i = 0; i < size; i++)
{
sum_main += a[i * size + i];
sum_secondary += a[i * size + (size - 1 - i)];
}

/* Print the sum of the diagonals */
_putchar('0' + sum_main);
_putchar(',');
_putchar(' ');
_putchar('0' + sum_secondary);
_putchar('\n');
}
