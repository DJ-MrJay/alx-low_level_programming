#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char digit;

	number = 0;

	while (number < 10)
	{
		digit = number + '0';
		putchar(digit);
		number++;
	}

	putchar('\n');

	return (0);
}
