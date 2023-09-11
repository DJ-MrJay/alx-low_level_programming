#include "main.h"

/**
 * set_bit - Sets a specific bit at the given index to 1 in a number.
 * @n: A pointer to the number to change.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure if index is out of bounds.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
