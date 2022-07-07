/*
 * File: 3-print_numbers.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * print_numbers - Prints the number from 0 to 9,
 *                 followed by a new line
 */
void print_numbers(void)
{
int num;

for (num = 0; num <= 9; num++)
_putchar((num % 10) + '0');
_putchar('\n');
}
