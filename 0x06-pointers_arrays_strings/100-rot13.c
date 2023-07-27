#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string
 * Return: Pointer to the modified string
 */
char *rot13(char *str)
{
int i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *str = s;

while (*s)
{
for (i = 0; i <= 52; i++)
{
if (*s == alphabet[i])
{
*s = rot13[i];
break;
}
}
s++
}

return (str);
}
