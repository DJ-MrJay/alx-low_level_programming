#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to encode.
 *
 * Return: Pointer to the resulting encoded string.
 */
char *leet(char *str)
{
char *ptr = str;
char leet_map[10] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T', '\0', 'O'};

while (*ptr != '\0')
{
char c = *ptr;

if (c >= 'a' && c <= 'z')
{
// Map lowercase letters to their 1337 equivalents
c = leet_map[c - 'a'];
}

else if (c >= 'A' && c <= 'Z')
{
// Map uppercase letters to their 1337 equivalents
c = leet_map[c - 'A'];
}

_putchar(c);

ptr++;
}

return (str);
}
