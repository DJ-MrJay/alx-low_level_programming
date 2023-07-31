/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
char source[] = "Hello, World!";
char destination[20];

_memcpy(destination, source, sizeof(source));

/* Print the copied string to verify the functionality. */
char *ptr = destination;
while (*ptr != '\0')
{
_putchar(*ptr);
ptr++;
}
_putchar('\n');

return (0);
}
