/*
 * File: 7-print_diagonal.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of times the character \ is printed
 *     The diagonal end with a newline.
 * @n = 0 || <: Print newline.
 */

void print_diagonal(int n)
{
int len, space;

if (n > 0)
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
_putchar(' ');
_putchar('\\');

if (len == n - 1)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
