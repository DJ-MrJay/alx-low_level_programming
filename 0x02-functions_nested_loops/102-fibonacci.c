#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int num1 = 1, num2 = 2, fib;

	printf("%lu, %lu", num1, num2);

	for (i = 2; i < 50; i++)
	{
		fib = num1 + num2;
		printf(", %lu", fib);

		num1 = num2;
		num2 = fib;
	}

	printf("\n");

	return (0);
}
