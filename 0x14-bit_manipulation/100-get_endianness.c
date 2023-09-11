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

	return (*c);
}
