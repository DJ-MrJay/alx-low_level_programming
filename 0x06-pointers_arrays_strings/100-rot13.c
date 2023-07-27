#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str)
{
char *ptr = str;
char *start = str;
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;

while (*ptr != '\0')
{
if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
{
for (i = 0; i < 26; i++)
{
if (*ptr == rot13[i])
{
*ptr = (i < 13) ? rot13[i + 13] : rot13[i - 13];
break;
}
}
}

ptr++;
}

return start;
}
