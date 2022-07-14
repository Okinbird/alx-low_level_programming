/*
 * File: 100-rot13.c
 */

#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s:  The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
int i;
int j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
for (j = 0; j < 52; j++)
{
if (a[j] == *(s + i))
{
*(s + i) = b[j];
break
}
}
}
return (s);
}
