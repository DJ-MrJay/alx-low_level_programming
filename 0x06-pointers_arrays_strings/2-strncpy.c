#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *dest_ptr = dest;

while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}

while (n > 0)
{
*dest_ptr = '\0';
dest_ptr++;
n--;
}

return (dest);
}
