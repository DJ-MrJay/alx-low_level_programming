#include <unistd.h>

/* Custom putchar function */
int _putchar(char c)
{
    return write(1, &c, 1);
}
