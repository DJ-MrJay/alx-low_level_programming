#include "main.h"

/**
 * clear_bit - Sets the value of a specified bit to 0 in a decimal number.
 * @n: A pointer to the number to change.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 for success, -1 for failure (if index is out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index)) & *n;
	return (1);
}
