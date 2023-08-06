#include "main.h"

/**
 * _strcmp - Compare two strings lexicographically.
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 *
 * Return: Difference between the ASCII values of the first
 * differing characters.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

/* Iterate through both strings until the null terminator
is reached or a difference is found */
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
/* Return the difference between the ASCII values of the
differing characters */
return (s1[i] - s2[i]);
}
i++;
}

/* If both strings are equal up to this point, return 0 */
return (0);
}
