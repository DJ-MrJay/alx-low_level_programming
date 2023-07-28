#include <stdio.h>

/**
 * print_line - Prints a single line of the buffer.
 * @b: Pointer to the buffer to print.
 * @size: The size of the buffer.
 * @start: The starting index for the line to print.
 */
void print_line(char *b, int size, int start)
{
int i;

printf("%08x: ", start);

for (i = 0; i < 10; i++)
{
if (start + i < size)
{
printf("%02x", b[start + i]);
}
else
{
printf("  ");
}

if (i % 2 == 1)
{
printf(" ");
}
}

for (i = 0; i < 10; i++)
{
if (start + i < size)
{
if (b[start + i] >= ' ' && b[start + i] <= '~')
{
printf("%c", b[start + i]);
}
else
{
printf(".");
}
}
}

printf("\n");
}

/**
 * print_buffer - Prints a buffer.
 * @b: Pointer to the buffer to print.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
int i;

for (i = 0; i < size; i += 10)
{
print_line(b, size, i);
}

if (size <= 0)
{
printf("\n");
}
}
