/*
 * File: 9-strcpy.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"
#include <stdio.h>
#define LEN 4

/**
 * _strcpy - Copies a string pointed to by @str, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{

int index = 0;

while (src[index])
{

dest[index] = src[index];
index++;

}
return (dest);

}