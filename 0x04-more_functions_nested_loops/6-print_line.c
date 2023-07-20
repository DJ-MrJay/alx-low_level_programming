#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, 1. On error,
 * -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_line - Draws a straight line in the
 * terminal using the _putchar function.
 * @n: The number of times the character _ should be printed.
 * The line should end with a \n.
 * If n is 0 or less, the function should only print \n.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i;
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
