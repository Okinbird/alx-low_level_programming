/*
 * File: 0-strcat.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"
#include <string.h>

/**
 * strcat - Concatrates two strings. overwriting the terminating
 *          null byte, at the end of @dest, and adds a terminating null byte.
 * @dest: The string to be concatenated upon.
 * @src: The string to be appended to @dest.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)

{
int i = 0;
int j = 0;

while (dest[i++])
j++;
{
for (i = 0; src[i]; i++)
dest[j++] = src[i];
}
return (dest);
}
