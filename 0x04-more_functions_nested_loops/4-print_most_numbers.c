/*
 * File: 4-print_most_numbers.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9,
 *                      2 and 4 excluded, followed by a new line.
 */

void print_most_numbers(void)
{
int num;

for (num = 0; num <= 9; num++)
{
if (num != 2 && num != 4)
_putchar((num % 10) + '0');
}
_putchar('\n');
}
