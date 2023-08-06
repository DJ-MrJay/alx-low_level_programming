#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the input string to search.
 * @needle: Pointer to the substring to find in @haystack.
 *
 * Return: Pointer to the first occurrence of @needle in @haystack,
 *         or NULL if @needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{
/* Iterate through the @haystack string */
for (; *haystack != '\0'; haystack++)
{
char *l = haystack; /* Pointer to the current position in @haystack */
char *p = needle; /* Pointer to the current position in @needle */

/* Compare the characters in both strings */
while (*l == *p && *p != '\0')
{
l++;
p++;
}

/* Check if the whole @needle string was found in @haystack */
if (*p == '\0')
return (haystack); /* Return the pointer to the first occurrence of
@needle in @haystack */
}

return (NULL); /* Return NULL if @needle is not found in @haystack */
}
