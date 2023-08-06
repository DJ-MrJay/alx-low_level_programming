#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to check.
 *
 * Return: The absolute value of @n.
 */
int _abs(int n)
{
if (n >= 0)
{
return (n); /* Return @n if it is non-negative */
}

return (-n); /* Return the negation of @n if it is negative */
}
