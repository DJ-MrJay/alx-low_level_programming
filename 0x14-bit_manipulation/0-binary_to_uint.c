#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented as
 * a string to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The converted unsigned int, or 0 if an invalid
 * character is encountered or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int dec_val = 0;

	for (int i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec_val = (dec_val * 2) + (b[i] - '0');
	}

	return (dec_val);
}
