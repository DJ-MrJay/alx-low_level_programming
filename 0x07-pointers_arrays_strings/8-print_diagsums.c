#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int sum_main = 0;
int sum_secondary = 0;

/* Calculate the sum of the main diagonal and the secondary diagonal */
for (int i = 0; i < size; i++)
{
/* Accessing elements of the main diagonal */
sum_main += a[i * size + i];
/* Accessing elements of the secondary diagonal */
sum_secondary += a[i * size + (size - 1 - i)];
}

/* Print the sum of the diagonals */
/* Convert sum_main to a character and print */
_putchar('0' + sum_main);
_putchar(',');
_putchar(' ');
/* Convert sum_secondary to a character and print */
_putchar('0' + sum_secondary);
_putchar('\n');
}
