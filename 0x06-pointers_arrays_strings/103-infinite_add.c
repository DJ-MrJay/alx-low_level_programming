#include "main.h"
#include <stdio.h>

/**
 * reverse_string - Reverses a string in place
 * @str: The string to reverse
 */
static void reverse_string(char *str)
{
int start = 0;
int end = 0;
char tmp;

while (str[end + 1])
end++;

while (start < end)
{
tmp = str[start];
str[start] = str[end];
str[end] = tmp;
start++;
end--;
}
}

/**
* add_numbers - Adds two numbers digit by digit
* @n1: The first number as a string
* @n2: The second number as a string
* @r: The buffer to store the result
* @size_r: The buffer size
* @len1: The length of the first number
* @len2: The length of the second number
*/
static void add_numbers(char *n1, char *n2, char *r,
int size_r, int len1, int len2)
{
int i, j, k, carry = 0;

r[size_r - 1] = '\0';
len1--;
len2--;
k = size_r - 2;

while (len1 >= 0 || len2 >= 0)
{
int sum = carry;

if (len1 >= 0)
sum += n1[len1] - '0';
if (len2 >= 0)
sum += n2[len2] - '0';

carry = sum / 10;
r[k] = (sum % 10) + '0';

k--;
len1--;
len2--;
}

if (carry)
{
if (k < 0)
return;

r[k] = carry + '0';
}
else
k++;

if (k >= 0)
reverse_string(&r[k]);
}

/**
* infinite_add - Adds two positive numbers and stores the result in a buffer
* @n1: The first number as a string
* @n2: The second number as a string
* @r: The buffer to store the result
* @size_r: The buffer size
*
* Return: Pointer to the result (r) or 0 if the result can't be stored in r.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0;

while (n1[len1])
len1++;

while (n2[len2])
len2++;

if (size_r <= len1 || size_r <= len2)
return (0);

add_numbers(n1, n2, r, size_r, len1, len2);
return (r);
}
