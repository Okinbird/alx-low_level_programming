#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d:  Pointer to structure
 * @name:  Pointer to the name of the dog
 * @age:  The age of the dog
 * @owner:  Pointer to the owner of the dog
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
