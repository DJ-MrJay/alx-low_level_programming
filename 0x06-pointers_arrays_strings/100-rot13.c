#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string
 * Return: Pointer to the modified string
 */
char *rot13(char *str)
{
int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i]; i++)
{
for (j = 0; alphabet[j]; j++)
{
if (str[i] == alphabet[j])
{
str[i] = rot13[j];
break;
}
}
}

return (str);
}
