#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be printed.
 *
 * Return: On success, it returns 1.
 * On error, it returns -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
