#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	long int i, num = 612852475143;

	/* Divide by 2 until the number is odd */
	while (num % 2 == 0)
	{
		num /= 2;
	}

	/* Now num is odd, start checking odd factors */
	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0 && num != i)
		{
			num /= i;
		}
	}

	printf("%ld\n", num); /* The remaining num is the largest prime factor */
	return (0);
}
