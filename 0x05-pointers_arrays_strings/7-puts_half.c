#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
int i;

while (*str != '\0')
{
len++;
str++;
}

str -= len;

if (len % 2 == 0)
i = len / 2;
else
i = (len - 1) / 2 + 1;

for (; i < len; i++)
_putchar(*(str + i));

_putchar('\n');
}
