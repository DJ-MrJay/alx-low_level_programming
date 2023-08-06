#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the input string.
 * @accept: Pointer to the set of bytes to search for.
 *
 * Return: Pointer to the first occurrence of any byte from @accept in @s,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
int k;

/* Iterate through the string @s */
while (*s)
{
/* Iterate through the set of bytes @accept */
for (k = 0; accept[k]; k++)
{
/* Check if the current character in @s matches any byte in @accept */
if (*s == accept[k])
{
return (s); /* Return the pointer to the first match */
}
}
s++; /* Move to the next character in @s */
}

return (0); /* Return NULL if no match is found */
}
