#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int src_len = 0;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Find the length of the source string */
while (src[src_len] != '\0')
{
src_len++;
}

/* Append the source string to the destination string */
for (int i = 0; i < src_len; i++)
{
dest[dest_len + i] = src[i];
}

/* Null-terminate the concatenated string */
dest[dest_len + src_len] = '\0';

return (dest);
}
