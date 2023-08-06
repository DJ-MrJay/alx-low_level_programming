#include "main.h"

/**
 * _atoi - Converts a string into an integer.
 * @s: The string to convert.
 *
 * Return: The integer result of the conversion.
 */
int _atoi(char *s)
{
int sign = 1, i = 0;
unsigned int res = 0;

/* Find the sign of the number */
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}

/* Convert the string to an integer */
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
res = (res * 10) + (s[i] - '0');
i++;
}

res *= sign; /* Apply the sign to the result */

return (res); /* Return the integer result */
}
