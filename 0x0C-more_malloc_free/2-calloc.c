#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an unputted byte size.
 * @nmemb:  The number of elements
 * @size:  The byte size of each array element.
 *
 * Return: If nmenb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
