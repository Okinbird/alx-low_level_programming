/*
 * File: 100-rot13.c
 * Auth: Eyebiokin Olayinka
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
char storem[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
char storen[] = "nopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
{
s[i] = (s[i] - 65 > 25) ?
storen[s[i] - 'a'] : storem[s[i] - 'A'];
}
}
return (s);
}
