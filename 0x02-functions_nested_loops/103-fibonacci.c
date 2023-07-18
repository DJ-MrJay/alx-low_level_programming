#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, fib, sum = 2;

	while ((num1 + num2) <= 4000000)
	{
		fib = num1 + num2;

		if (fib % 2 == 0)
			sum += fib;

		num1 = num2;
		num2 = fib;
	}

	printf("%lu\n", sum);

	return (0);
}
