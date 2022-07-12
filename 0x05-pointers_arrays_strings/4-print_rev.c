/*
 * File: 4-print_rev.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse,
 *             followed by a new line.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{

int len = 0, index;

while (s[index++])
len++;

for (index = len - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');

}
