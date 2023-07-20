#include "main.h"

/**
 * fizz_buzz - Prints numbers from 1 to 100 with conditions
 */
void fizz_buzz(void)
{
	int fizz, buzz;

	for (int i = 1; i <= 100; i++)
	{
		fizz = i % 3 == 0;
		buzz = i % 5 == 0;

		if (fizz || buzz)
		{
			if (fizz)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
			}

			if (buzz)
			{
				_putchar(fizz ? 'B' : 'B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
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
