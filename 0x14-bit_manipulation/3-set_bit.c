#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1 in a decimal number.
 * @n: A pointer to the number to change.
 * @index: The index of the bit to set to 1 (0-based).
 *
 * Return: 1 for success, -1 for failure (if index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    *n = *n | (1UL << index);
    return (1);
}
