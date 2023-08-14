#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Initializes a struct dog variable
* @d: Pointer to struct dog to initialize
* @name: Name to set
* @age: Age to set
* @owner: Owner to set
*
* Description: This function initializes the fields of a struct dog.
*              If d is NULL, it allocates memory for the struct dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
return; /* Return if memory allocation fails */
}
d->name = name;
d->age = age;
d->owner = owner;
}
