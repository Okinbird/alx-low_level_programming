#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 *            locates the first occurence in the string @s
 *            of any bytes in the string @accept
 * @s:      The string to be searched
 * @accept: The set of bytes to be searched for
 *
 * Return:  A pointer to the bytes in s
 *          that matches one of the bytes in accept
 *          or Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
  unsigned int i, j;

  for (i = 0; s[i]; i++)
    {
      for (j = 0; accept[j]; j++)
	{
	  if (s[i] == accept[j])
	    break;
	}
      if (accept[j])
	return (s + i);
    }
  return (0);
}
