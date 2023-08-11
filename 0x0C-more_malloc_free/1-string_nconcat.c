#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string
 * @s1: String to append to
 * @s2: String to concatenate from
 * @n: Number of bytes from s2 to concatenate to s1
 *
 * Return: Pointer to the resulting string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1)
{
while (s1[len1])
len1++;
}
if (s2)
{
while (s2[len2])
len2++;
}

if (n < len2)
{
result = malloc(sizeof(char) * (len1 + n + 1));
}
else
{
result = malloc(sizeof(char) * (len1 + len2 + 1));
}

if (!result)
{
return (NULL); /* Memory allocation failed */
}

for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}

for (i = len1, j = 0; j < n && s2[j]; i++, j++)
{
result[i] = s2[j];
}

result[i] = '\0';

return (result);
}
