#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the input string.
 * @c: The character to be located.
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
int i = 0;

/* Iterate through the string until the end or the character is found */
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}

/* Return NULL if the character is not found in the string */
return (NULL);
}
