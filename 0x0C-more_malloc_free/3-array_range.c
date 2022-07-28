#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *               ordered from min to max, inclusive.
 * @min:  The first value of the array.
 * @max:  the last value of the array.
 *
 * Return: If min > max or the function fails - NULL
 *         Otherwise - A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *p;
int i, l;
if (min > max)
return (NULL);
l = max - min + 1;
p = malloc(sizeof(int) * l);
if (p == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
p[i] = min;
}
return (p);
}
