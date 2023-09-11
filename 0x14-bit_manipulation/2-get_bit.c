#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specified index
 * in a decimal number.
 * @n: The decimal number to search.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the given index, or -1 if
 * the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	int bit_val = (n >> index) & 1;

	return (bit_val);
}
