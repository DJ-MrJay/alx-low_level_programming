#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar,
2015-10-19\n";
ssize_t len = strlen(message);

write(STDERR_FILENO, message, len);

return (1);
}
