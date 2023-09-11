#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 * to change from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	for (int i = 0; i < 64; i++)
	{
		if (exclusive & (1UL << i))
			count++;
	}

	return (count);
}
