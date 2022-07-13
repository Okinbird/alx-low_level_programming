/*
 * File: 9-strcpy.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

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

int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);

}
