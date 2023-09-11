/**
 * get_bit - retrieves the value of a specific bit in a decimal number
 * @n: the number to examine
 * @index: the position of the target bit
 *
 * Return: the value of the specified bit (0 or 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
