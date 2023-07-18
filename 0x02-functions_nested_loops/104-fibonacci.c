#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long int num1 = 1, num2 = 2, fib;

	printf("%lu, %lu", num1, num2);

	for (count = 2; count < 98; count++)
	{
		fib = num1 + num2;
		printf(", %lu", fib);

		num1 = num2;
		num2 = fib;
	}

	printf("\n");

	return (0);
}
