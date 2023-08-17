#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the appropriate function to perform
 *               the requested operation based on the operator.
 * @s: The operator passed as an argument.
 *
 * Return: A pointer to the function corresponding
 *         to the provided operator, or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}

return (NULL);
}
