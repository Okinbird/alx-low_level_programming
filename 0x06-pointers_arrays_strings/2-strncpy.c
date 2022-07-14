/*
 * File: 2-strncpy.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string number of bytes
 *            from string src into dest.
 * @dest:  The buffer storing the string copy.
 * @src:   The source string.
 * @n:     The number of bytes copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (src[i++])
j++;
{
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
}
for (i = j; i < n; i++)
dest[i] = '\0';
return (dest);
}
