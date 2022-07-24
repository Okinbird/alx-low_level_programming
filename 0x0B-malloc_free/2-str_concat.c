#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1:  String to be concatenated upon.
 * @s2:  The second string to be contenated to s1
 *
 * Return: If function fails - NULL.
 *         Otherwise - A pointer to anewly allocated space in memory
 *                     containing the concateneted strings.
 */
char *str_concat(char *s1, char *s2)
{
char *c;
int i, j = 0, k = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
k++;

c = malloc(sizeof(char) * k);

if (c == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
c[j++] = s1[i];

for (i = 0; s2[i]; i++)
c[j++] =s2[i];

return (c);
}
