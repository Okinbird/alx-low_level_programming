#include "dog.h"
#include <stdlib.h>

/**
 * _strlen(char *str);
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return(len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the 
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest:  The buffer storing the string copied
 * @src:  The source of the string
 *
 * Return: A pointer to the dest.
 */
char *_strcopy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}

/**
 * new_dog - Crestes a new dog
 * @name:  The name of the dog
 * @age:  The age of the dog
 * @owner:  The owner of the dog
 *
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_n;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
dog_n = malloc(sizeof(dog_t));
if (dog_n == NULL)
return (NULL);
dog_n->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog_n->name == NULL)
{
free(dog_n);
return (NULL);
}
dog_n->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog_n->owner == NULL)
{
free(dog_n->name);
free(dog_n);
return (NULL);
}
dog_n->name = _strcopy(dog_n->name, name);
dog_n->age = age;
dog_n->owner = _strcopy(dog_n->owner, owner);

return (dog_n);
}
