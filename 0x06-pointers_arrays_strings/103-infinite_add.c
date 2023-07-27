#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to add.
 * @n2: The second number to add.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: Pointer to the result or 0 if the result can not be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0;
int len2 = 0;
int i;
int sum = 0;
int carry = 0;

while (n1[len1] != '\0')
{
len1++;
}

while (n2[len2] != '\0')
{
len2++;
}

if (len1 + 2 > size_r || len2 + 2 > size_r)
{
return 0;
}

for (i = 0; i < len1 || i < len2; i++)
{
sum = carry;

if (i < len1)
{
sum += n1[len1 - i - 1] - '0';
}

if (i < len2)
{
sum += n2[len2 - i - 1] - '0';
}

if (sum > 9)
{
carry = 1;
sum -= 10;
} else
{
carry = 0;
}

r[i] = sum + '0';
}

if (carry == 1)
{
if (i + 2 > size_r)
{
return 0;
}

r[i++] = '1';
}

r[i] = '\0';

for (i = 0; i < len1 / 2; i++)
{
char tmp = n1[i];
n1[i] = n1[len1 - i - 1];
n1[len1 - i - 1] = tmp;
}

for (i = 0; i < len2 / 2; i++)
{
char tmp = n2[i];
n2[i] = n2[len2 - i - 1];
n2[len2 - i - 1] = tmp;
}

for (i = 0; r[i] != '\0' && i < size_r / 2; i++)
{
char tmp = r[i];
r[i] = r[strlen(r) - i - 1];
r[strlen(r) - i - 1] = tmp;
}

return r;
}
