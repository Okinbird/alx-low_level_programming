/*
 * File: 8-print_square.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * print_square - Prints a square, using the character #,
 *                followed by a new line.
 * @size: Size of the square.
 * @size = 0 || <: Print a new line.
 */

void print_square(int size)
{
int hgt, wid;

if (size > 0)
{
for (hgt = 0; hgt < size; hgt++)
{
for (wid = 0; wid < size; wid++)
_putchar('#');

if (hgt == size - 1)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
