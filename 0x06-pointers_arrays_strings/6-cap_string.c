#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to capitalize.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize_next = 1;

while (*ptr != '\0')
{
/* Capitalize the current character if needed */
if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr = *ptr - ('a' - 'A');
}

/* Set capitalize_next to 1 if the current character is a word separator */
capitalize_next = is_separator(*ptr);

ptr++;
}

return str;
}
