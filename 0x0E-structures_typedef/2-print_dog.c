#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints details of a struct dog
 * @d: Pointer to struct dog to print
 *
 * Description: This function prints the name, age, and owner of a struct dog.
 *              If name or owner is NULL, it's displayed as "(nil)".
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    if (d->name == NULL)
        d->name = "(nil)";
    if (d->owner == NULL)
        d->owner = "(nil)";

    printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
