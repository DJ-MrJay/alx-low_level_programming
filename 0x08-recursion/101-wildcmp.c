#include "main.h"

int wildcmp_helper(char *s1, char *s2);

/**
 * wildcmp - Compares two strings with wildcard support.
 * @s1: The first string to compare.
 * @s2: The second string to compare (can contain the special character '*').
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s2 == '*')
return (wildcmp_helper(s1, s2 + 1) || (*s1 != '\0' && wildcmp_helper(s1 + 1, s2)));
else if (*s1 == *s2)
return (wildcmp_helper(s1 + 1, s2 + 1));

return (0);
}

/**
* wildcmp_helper - Recursive helper function for wildcmp.
* @s1: The first string to compare.
* @s2: The second string to compare (without the initial '*').
*
* Return: 1 if the strings can be considered identical, 0 otherwise.
*/
int wildcmp_helper(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == *s2)
return (wildcmp_helper(s1 + 1, s2 + 1));
else if (*s2 == '*')
return (wildcmp(s1, s2));
else if (*s1 == '\0')
return (0);

return (0);
}
