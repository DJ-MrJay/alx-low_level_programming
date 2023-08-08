#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string to a new memory space location.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
i++;

length = i;

duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
duplicate[i] = str[i];

duplicate[i] = '\0';

return (duplicate);
}
