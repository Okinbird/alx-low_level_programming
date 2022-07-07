/*
 * File: 6-print_line.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character _ is printed
 *     Ending with s newline
 * @n = 0 || <: Print newline.
 */

void print_line(int n)
{
int len;

if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}
_putchar('\n');
}
