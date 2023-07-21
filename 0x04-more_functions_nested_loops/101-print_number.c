#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 * Return: Always 0
 */
void print_number(int num)
{
	int i = num;

	if (num < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
