#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * Return: A pointer to the concatenated string,
 * or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int length_s1 = 0, length_s2 = 0, i, j;

/* If s1 is NULL, set it as an empty string */
if (s1 == NULL)
s1 = "";

/* If s2 is NULL, set it as an empty string */
if (s2 == NULL)
s2 = "";

/* Calculate the length of s1 */
while (s1[length_s1] != '\0')
length_s1++;

/* Calculate the length of s2 */
while (s2[length_s2] != '\0')
length_s2++;

/* Allocate memory for the concatenated string */
concatenated = (char *)malloc(sizeof(char) * (length_s1 + length_s2 + 1));

/* Check if memory allocation was successful */
if (concatenated == NULL)
return (NULL);

/* Copy characters from s1 to concatenated */
for (i = 0; s1[i] != '\0'; i++)
concatenated[i] = s1[i];

/* Copy characters from s2 to concatenated */
for (j = 0; s2[j] != '\0'; j++, i++)
concatenated[i] = s2[j];

/* Add null-terminator to the end of concatenated */
concatenated[i] = '\0';

return (concatenated);
}
