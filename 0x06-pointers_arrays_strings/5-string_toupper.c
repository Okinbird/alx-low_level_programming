/*
 * File: 5-string_toupper.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"
#include <string.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str:  The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -=32;
}
}
return (str);
}
