#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate command line arguments into a single string.
 * @ac: The number of command line arguments.
 * @av: An array of strings containing the arguments.
 * Return: A pointer to the concatenated string,
 * or NULL if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
int i, j, total_length = 0, str_index = 0;
char *result;

/* Check if there are no arguments or if the array is NULL */
if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_length++;
}
total_length += ac; /* Account for newline characters */

/* Allocate memory for the concatenated string */
result = malloc(sizeof(char) * (total_length + 1));
if (result == NULL)
return (NULL);

/* Copy each argument into the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
result[str_index] = av[i][j];
str_index++;
}
if (i < ac - 1) /* Add newline character after each arg (except the last) */
{
result[str_index] = '\n';
str_index++;
}
}

/* Add null-terminator to the end of the concatenated string */
result[str_index] = '\0';

return (result);
}
