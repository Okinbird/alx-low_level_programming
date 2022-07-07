/*
 * File: 10-print_triangle.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #,
 *                  follwed by new line.
 * @size: Size of the triangle.
 * @size = 0 || <: Print a new line.
 */


void print_triangle(int size)
{
int hash, index;

if (size > 0)
{
for (hash = 1; hash <= size; hash++)
{
for (index = size - hash; index > 0; index--)
_putchar(' ');

for (index = 0; index < hash; index++)
_putchar('#');

if (hash == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
