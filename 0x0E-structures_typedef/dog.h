#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing basic information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure contains essential details about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the dog structure
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * Return: Pointer to the new dog structure, NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculates the length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(char *s);

#endif /* DOG_H */
