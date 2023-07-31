#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i;

while (*haystack)
{
i = 0;
while (needle[i] && (haystack[i] == needle[i]))
i++;
if (needle[i] == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
