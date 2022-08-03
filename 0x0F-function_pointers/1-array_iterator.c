#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array
 * @array:  The array
 * @size:  The size of the array
 * @action: A pointer to the function used
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t index;
if (array == NULL || action == NULL)
return;
{
for (index = 0; index < size; index++)
{
action(array[index]);
}
}
}
