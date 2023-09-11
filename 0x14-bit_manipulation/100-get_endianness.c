#include "main.h"

/**
 * get_endianness - Checks if the machine is little or big endian.
 *
 * Return: 1 for little endian, 0 for big endian.
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *)&i;

    /* Check the value of the first byte (least significant byte). */
    /* If it's 1, the machine is little endian; otherwise, it's big endian. */
    return (*c == 1);
}
