#include "main.h"
#include <unistd.h> /* Add the unistd.h header for the write function */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

/**
 * _putchar - Custom function to print a character to stdout.
 * @c: The character to be printed.
 *
 * Return: On success, return the character.
 * On error, return -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
