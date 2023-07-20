#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in
 * the terminal using the _putchar function.
 * @n: The number of times the character '\' should be printed.
 * The diagonal should end with a '\n'.
 * If n is 0 or less, the function should only print a '\n'.
 */
void print_diagonal(int n)
{
	int i, j;

    if (n <= 0)
	{
		_putchar('\n');
	
    for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
