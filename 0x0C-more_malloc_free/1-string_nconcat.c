#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using
 *                  at most an inputted number of bytes.
 * @s1:  The first string.
 * @s2:  The second string.
 * @n:   The maximum number of bytes of s2 to concatenete to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, k;
if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[k + i] = s2[k];
s[i + j] = '\0';
return (s);
}
