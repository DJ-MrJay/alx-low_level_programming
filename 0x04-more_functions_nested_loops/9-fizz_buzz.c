#include "main.h"

/**
 * main - entry point
 * fizz_buzz - Prints numbers from 1 to 100 with conditions
 * 'Fizz' for multiples of 3, 'Buzz' for multiples of 5,
 * 'Fizzbuzz for multiples of both
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
