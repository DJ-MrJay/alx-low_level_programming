#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times to print the table
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0'); /* Print the first digit */
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;
			if (result >= 100)
			{
				_putchar('0' + result / 100); /* Print the hundreds digit */
				_putchar('0' + (result / 10) % 10); /* Print the tens digit */
				_putchar('0' + result % 10); /* Print the ones digit */
			}
			else if (result >= 10)
			{
				_putchar(' '); /* Print a space for alignment */
				_putchar('0' + result / 10); /* Print the tens digit */
				_putchar('0' + result % 10); /* Print the ones digit */
			}
			else
			{
				_putchar(' '); /* Print two spaces for alignment */
				_putchar(' '); /* Print the tens digit */
				_putchar('0' + result); /* Print the ones digit */
			}
		}
		_putchar('\n');
	}
}
