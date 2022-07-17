#include "main.h"

/**
 * _strstr - Locates a substring. Finds the first occurrence of the substring
 *           @needle in the string @haystack. 
 *           The terminating null bytes are not compared.
 * @needle:  The substring to be located
 * @haystack:  The string to be searched
 *
 * Return: A pointer to the begining of the located substring.
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;

while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}
