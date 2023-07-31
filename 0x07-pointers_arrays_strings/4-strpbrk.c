#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing accepted bytes.
 *
 * Return: Pointer to the byte in 's' that matches one of
 * the bytes in 'accept', or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
for (int i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
