#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination string to copy to.
 * @src: Pointer to the source string to copy from.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int i = 0;

/* Calculate the length of the source string */
while (*(src + length) != '\0')
{
length++;
}

/* Copy the source string to the destination string */
for (; i < length; i++)
{
dest[i] = src[i];
}

dest[length] = '\0'; /* Null-terminate the destination string */

return (dest); /* Return the pointer to the destination string */
}
