#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

/* Copy the source string up to n bytes */
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}

/* Fill the remaining bytes with null terminators if necessary */
while (j < n)
{
dest[j] = '\0';
j++;
}

return (dest);
}
