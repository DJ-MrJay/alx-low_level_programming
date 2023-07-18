#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0'); /* Print the first digit */
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;
			if (result >= 10)
			{
				_putchar('0' + result / 10); /* Print the tens digit */
				_putchar('0' + result % 10); /* Print the ones digit */
			}
			else
			{
				_putchar(' '); /* Print a space for alignment */
				_putchar('0' + result); /* Print the ones digit */
			}
		}
		_putchar('\n');
	}
}
