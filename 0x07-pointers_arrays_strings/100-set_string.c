#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Description: Demonstrates the usage of the set_string function
 *              to set the value of a pointer to a new string.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *s0 = "Bob Dylan";
char *s1 = "Robert Allen";

printf("%s, %s\n", s0, s1);

// Using the set_string function to set the value of s1 to s0.
set_string(&s1, s0);

printf("%s, %s\n", s0, s1);
return (0);
}
