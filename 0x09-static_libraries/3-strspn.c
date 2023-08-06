#include "main.h"

/**
 * _strspn - Gets the length of the initial segment of a string that consists
 *           entirely of characters from a given set.
 * @s: Pointer to the input string.
 * @accept: Pointer to the set of accepted characters.
 *
 * Return: The number of bytes in the initial segment of @s which consist
 *         only of characters from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

/* Iterate through the string @s */
while (*s)
{
/* Iterate through the set of accepted characters @accept */
for (r = 0; accept[r]; r++)
{
/* Check if the current character in @s is in the set of */
/* accepted characters */
if (*s == accept[r])
{
n++; /* Increment the counter for accepted characters */
break; /* Break out of the inner loop to move to the next character in @s */
}
else if (accept[r + 1] == '\0')
return (n); /* Return the length when a character not in @accept is found */
}
s++; /* Move to the next character in @s */
}
return (n); /* Return the length of the initial segment of @s consisting of */
/ * characters from @accept */
}
