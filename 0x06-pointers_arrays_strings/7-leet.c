/*
 * File: 7-leet.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @s:  The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *s)
{
int i1 = 0;
int i2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (s[i1])
{
for (i2 = 0; i2 <= 7; i2++)
{
if (s[i1] == leet[i2] ||
s[i1] - 32 == leet[i2])
s[i1] = i2 + '0';
}
i1++;
}
return (s);
}
