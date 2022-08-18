#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the bit
 * @index: The index to set the value at - indices start at 0
 *
 * Return: 1 if it worked
 *         Or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;
  
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
 
set = ~(1 << index);
*n &= set;

return (1);
}
