#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int tmp;
int start = 0;
int end = n - 1;

while (start < end)
{
tmp = a[start];
a[start] = a[end];
a[end] = tmp;
start++;
end--;
}
}
