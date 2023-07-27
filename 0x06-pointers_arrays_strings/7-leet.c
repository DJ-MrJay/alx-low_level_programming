#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet[] = "4433007711";

for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (str[i] == letters[j])
{
str[i] = leet[j];
break;
}
}
}

return (str);
}
