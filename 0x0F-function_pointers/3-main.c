#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Performs simple arithmetic operations on two numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2;
char *operator;

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);

if (get_op_func(operator) == NULL || operator[1] != '\0')
{
printf("Error\n");
return (99);
}

if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
{
printf("Error\n");
return (100);
}

printf("%d\n", get_op_func(operator)(num1, num2));

return (0);
}
