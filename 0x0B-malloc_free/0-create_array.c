#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size 'size' and initializes
 * each element with char 'c'.
 * @size: Size of the array.
 * @c: Char value to assign to each element.
 *
 * Description: This function dynamically allocates an array of size 'size'
 * and assigns the value 'c'
 * to each element in the array.
 *
 * Return: A pointer to the allocated array, or NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    str = malloc(sizeof(char) * size);
    if (size == 0 || str == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        str[i] = c;
    return (str);
}
