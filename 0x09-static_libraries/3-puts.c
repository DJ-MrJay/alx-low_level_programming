#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string to print.
 */
void _puts(char *str)
{
/* Iterate through the string until the null terminator is reached */
while (*str != '\0')
{
_putchar(*str++); /* Print each character using _putchar function */
}

_putchar('\n'); /* Print a new line after printing the string */
}
