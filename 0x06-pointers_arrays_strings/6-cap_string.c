#include "main.h"

/**
 * _is_separator - Checks if a character is a separator
 * @c: The character to check
 * Return: 1 if c is a separator, 0 otherwise
 */
int _is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i]; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i;

if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;

for (i = 1; str[i]; i++)
{
if (_is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
str[i] -= 32;
}

return (str);
}
