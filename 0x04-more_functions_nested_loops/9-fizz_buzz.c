#include "main.h"

/**
 * fizzbuzz - Prints numbers from 1 to 100 with conditions
 */
void fizz_buzz(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			int num = i;
			int count = 0;

			while (num != 0)
			{
				num /= 10;
				count++;
			}

			num = i;

			while (count != 0)
			{
				int divisor = 1;

				for (int j = 1; j < count; j++)
					divisor *= 10;

				int digit = num / divisor;
				_putchar(digit + '0');
				num %= divisor;
				count--;
			}
		}

		if (i != 100)
			_putchar(' ');
	}

	_putchar('\n');
}
