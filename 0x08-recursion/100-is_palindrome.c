#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to find the length of
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
* check_palindrome - checks if a string is a palindrome
* @s: string to check
* @len: length of s
* @i: index to check
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int check_palindrome(char *s, int len, int i)
{
if (i >= len / 2)
return (1);
else if (s[i] != s[len - i - 1])
return (0);
else
return (check_palindrome(s, len, i + 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: string to check
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

return (check_palindrome(s, len, 0));
}
