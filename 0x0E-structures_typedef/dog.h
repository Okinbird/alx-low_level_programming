#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Declare structure information of type dog
 * @name:  The name of the dog
 * @age :  The age of the dog
 * @owner:  The owner of the dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

int _puchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
