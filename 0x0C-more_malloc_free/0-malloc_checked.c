#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b:  The number of bytes to be allocated.
 *
 * Return: Apointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *mem;
mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}
