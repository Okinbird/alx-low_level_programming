/*
 * File: 1-strncat.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"
#include <string.h>
#include <stdio.h>


/**
 * _strncat - Concatenates two strings using at most
 *            n bytes from srn.
 * @dest: The string to be appended upon.
 * @srn:  The string to appended to dest.
 * @n:    The number of bytes from srn to be appended to dest.
 * 
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i++])
j++;
{
for (i = 0; src[i] && i < n; i++)
dest[j++] = src[i];
}
return (dest);
}
