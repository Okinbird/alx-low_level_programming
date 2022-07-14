/*
 * File: 6-cap_string.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str:  The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
i++;

if (str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||
i == 0)
str[i] -= 32;

i++;
}
return (str);
}
