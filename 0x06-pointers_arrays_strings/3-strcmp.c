/*
 * File: 3-strcmp.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings.
 * @s1:  The first string to be compared.
 * @s2:  The second string to be compared.
 *
 * Return: 0, if the s1 and s2 are equal.
 *         a negative value if s1 < s2.
 *         a positive value if s1 > s2.
 */

int _strcmp(char *s1, char *s2)
{
int index;
for (index = 0; s1[index] != '\0' || s2[index] != '\0'; index++)
{
if (s1[index] != s2[index])
return (s1[index] - s2[index]);
}
return (0);
}
