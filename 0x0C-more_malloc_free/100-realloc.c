#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr:  A pointer to the memory previosly allocated.
 * @old_size:  The size in bytes of the allocated space for ptr.
 * @new_size:  The size in bytes for the new memory block.
 *
 * Return:  If new_size == old_size - ptr.
 *          If new_size == 0 and ptr is not NULL - NULL.
 *          otherwise - A pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, max = new_size;
char *oldp = ptr;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
p[i] = oldp[i];
free(ptr);
return (p);
}
