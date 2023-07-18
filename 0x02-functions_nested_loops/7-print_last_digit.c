#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number whose last digit is to be printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = -num; /* Make sure we have a positive number */

	last_digit = num % 10;
	_putchar('0' + last_digit); /* Convert to ASCII and print the digit */

	return (last_digit);
}
