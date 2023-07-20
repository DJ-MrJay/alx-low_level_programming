#include "main.h"

/**
 * print_line - Draws a straight line in the
 * terminal using the _putchar function.
 * @n: The number of times the character _ should be printed.
 * The line should end with a \n.
 * If n is 0 or less, the function should only print \n.
 */
void print_line(int n)
{
	int i;

	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
