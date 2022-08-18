#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 nad 1 chars
 *
 * Return: The converted number
 *         Or 0 If b is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num = 0;

if (!b)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
num <<= 1;
if (b[i] == '1')
num += 1;
}
return (num);
}
