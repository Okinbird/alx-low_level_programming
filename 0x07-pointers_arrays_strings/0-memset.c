#include "main.h"

/**
 * _memset - Fills memory with a constant byte. Fills the first @n bytes
 *           of the memory area pointed to by @s with the constant byte @b
 * @s:  Memory space to be filled
 * @b:  Byte to fill with
 * @n:  Number of spaces to fill
 *
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
