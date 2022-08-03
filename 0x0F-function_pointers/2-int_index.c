#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array
 * @size: The size of array
 * @cmp: Function used to compare values
 *
 * Return: First index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (size < 0 || array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
