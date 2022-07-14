/*
 * File: 4-rev_array.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * reverse_array - Reverese the content of an array of integers.
 *@n:   The number of elements of the array.
 *@a:   The array of integers to be reversed.
 */

void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < (n / 2); i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = j;
}
}
