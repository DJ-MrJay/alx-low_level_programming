#include "main.h"

int main(void)
{
char source[] = "Hello, World!";
char destination[20];

_memcpy(destination, source, sizeof(source));

return (0);
}
